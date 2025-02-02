#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

int enA = 9;
int in1 = 8;
int in2 = 7;
int enB = 3;
int in3 = 5;
int in4 = 4;

const int threshold = 2;
float baselineX = 0;
float baselineY = 0;

void setup() {
    Serial.begin(9600);
    
    if (!mpu.begin()) {
        Serial.println("Failed to find MPU6050 chip!");
        while (1);
    }
    Serial.println("MPU6050 connected!");

    pinMode(enA, OUTPUT);
    pinMode(enB, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    
    delay(2000);
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);
    baselineX = abs(a.acceleration.x);
    baselineY = abs(a.acceleration.y);
}

void loop() {
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    float tremorX = abs(a.acceleration.x) - baselineX;
    float tremorY = abs(a.acceleration.y) - baselineY;

    if (tremorX > 1 && tremorX < 2 || tremorY > 1 && tremorY < 2) {
        int motorSpeed = map(tremorX + tremorY, threshold*10, 10, 100, 255);
        motorSpeed = constrain(motorSpeed, 100, 255);

        analogWrite(enA, motorSpeed);
        analogWrite(enB, motorSpeed);

        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    } else {
        analogWrite(enA, 0);
        analogWrite(enB, 0);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
    }

    Serial.print("TremorX: "); Serial.print(tremorX);
    Serial.print(" TremorY: "); Serial.println(tremorY);
    
    delay(100);
}
