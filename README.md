<h1 align="center">
  Steady
</h1>

![In Progress](https://img.shields.io/badge/status-in%20progress-yellow.svg)

# TremorTracker: Advanced Tremor Monitoring & Insights

> **TremorTracker** brings state-of-the-art tremor monitoring, predictive insights, and collaboration with healthcare professionals to your fingertips. This project is actively being developed to empower individuals with actionable data and tools to manage tremor-related conditions effectively.

Utilizing technologies like HealthKit, CoreML, and AI-driven predictions, TremorTracker offers a comprehensive suite of tools for tremor management and professional healthcare collaboration.

## Inspiration
Hand tremors, caused by conditions like Parkinson’s disease, essential tremor, or even anxiety and medications, disrupt daily tasks such as eating, writing, and using a phone. Affecting over 10 million Parkinson’s patients and 5% of people over 65 globally, tremors lead to reduced independence, social isolation, and emotional distress. In fact, over 60% of individuals with tremors report avoiding social situations due to embarrassment. With the prevalence of tremor-related conditions expected to rise, there is a growing need for non-invasive, wearable solutions to enhance motor control and improve quality of life.

## What it does
The Steady glove is a wearable device designed to suppress hand tremors in real time, offering a practical solution for individuals with Parkinson’s disease, essential tremor, or other conditions that cause involuntary hand movements. The glove uses an MPU6050 accelerometer to continuously monitor and detect tremor patterns along multiple axes. This data is processed by an Arduino-based control system that determines the intensity and direction of the tremors. When detected, reaction wheels driven by DC motors generate precise opposing torque to stabilize the user’s hand and reduce tremor effects.

## How we built it
We built this device by integrating an Arduino kit into a glove and using accelerometers to detect tremor patterns.

## Challenges we ran into
As a software-focused team, we ran into our fair share of struggles using these hardware integrations.

## Accomplishments that we're proud of
We are proud that our accelerometer integration and code are fully functional and our prototype is fully functional.

## What we learned
We learned a lot working with Arduinos in both the hardware, software, and debugging aspects. Additionally, this being our very first hackathon, we learned a lot about the format of hackathons and the overall workarounds.

## What's next for Steady
Prototype refinement is going to be the next step for Steady, along with working with usability and feasibility.

## The Steady App Modle UI

<table>
  <tr>
    <td align="center"><img src="Files/Home.png" alt="Home" width="200"/><br>Home</td>
    <td align="center"><img src="Files/Report.png" alt="Report" width="200"/><br>Report</td>
    <td align="center"><img src="Files/Prediction.png" alt="Prediction" width="200"/><br>Prediction</td>
    <td align="center"><img src="Files/Connect.png" alt="Connect" width="200"/><br>Connect</td>
  </tr>
</table>

## Key Features ✨

- **Tremor Monitoring Dashboard:** Track tremor metrics like intensity, duration, and patterns over time. Gain actionable insights to understand your tremor trends and when to seek medical attention.
- **AI-Powered Predictions:** Utilize advanced machine learning models to forecast tremor frequency and severity based on your history and lifestyle inputs.
- **Symptom Logging:** Log symptoms, stress levels, sleep quality, and more to improve prediction accuracy and monitor progress.
- **Doctor Collaboration:** Add healthcare professionals, book appointments, and share detailed tremor reports securely. QR code functionality ensures simple and secure data sharing.
- **Comprehensive Reports:** Visualize trends and generate interactive reports for better understanding and decision-making.
- **Community Connection:** Engage with a supportive community, read user stories, and share experiences for mutual support.
- **Educational Resources:** Access expert-curated articles and resources to better understand tremors and how to manage them effectively.
- **HealthKit Integration:** Sync with HealthKit to retrieve health metrics, such as sleep data and heart rate, for a holistic view of your health.

## Technologies Used

- **HealthKit:** Seamlessly integrates health data from your device.
- **CoreML:** Powers predictive models for tremor insights and analysis.
- **AI Chatbot:** Offers personalized suggestions and answers to your queries for better health management.
- **Secure Data Sharing:** QR codes ensure simple and safe sharing of health data with doctors and caregivers.
- **Interactive Dashboards:** Combines advanced UI with comprehensive data visualization for user-friendly analytics.
