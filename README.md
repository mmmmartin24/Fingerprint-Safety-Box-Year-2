<h2> Smart Fingerprint-Based Security Box </h2>

IEE2022 Microcontroller and Sensor I Final Project</h1>

📚 Project Overview
This project is a microcontroller-based smart security box designed to protect valuable items by combining multiple sensors and actuators. The system integrates a fingerprint scanner, ultrasonic distance sensor, LEDs, an LCD display, and a servo lock mechanism — all managed through an Arduino Uno.
It ensures that only registered users can access the box, and it provides real-time information about the status and presence of items inside the box.

🎯 Goals and Benefits
Purpose: Enhance the security of valuable items and enable easy access control.
Benefits:
- Prevent unauthorized access using fingerprint authentication.
- Provide clear visual feedback on lock status and item presence.
- Easy to build, replicate, and customize for small institutions or personal use.

⚙️ How It Works
🔑 Key Components:
- Arduino Uno: Acts as the main controller and communicates with sensors/actuators via I2C.
- Fingerprint Sensor: Registers and verifies users for secure access.
- Ultrasonic Sensor (HC-SR04): Detects the presence of objects in the box.
- LCD (I2C): Displays lock status and item availability.
- LEDs: Indicate system status and detection alerts.
- Push Button: Used for fingerprint registration.
- Micro Servo Motor: Controls the lock mechanism.

🔄 Operation Flow:
- Idle State: System monitors object presence and shows status on LCD.
- Access Request: User presses the button to scan fingerprint.
- Verification: If fingerprint matches the database, the lock opens; otherwise, access is denied.
- Lock Control: The servo opens/closes the lock automatically.
- Status Updates: LCD and LEDs provide clear feedback throughout.

🛠️ Assembly and Programming
Circuit Design:
- Wired on breadboard, powered by Arduino Uno.
- Uses I2C for communication between master and slave devices.

Software Tools:
- TinkerCAD (visualize 3D circuit design)
- Arduino IDE (develop and upload code)

✅ Conclusion & Suggestions
Conclusion:
The project successfully demonstrates an affordable, functional, and easy-to-build smart security box. It enhances safety by allowing only verified users to open it and provides clear feedback on the contents.

Future Improvements:
- Add a better user database system for larger scale.
- Integrate remote monitoring via Wi-Fi or IoT platforms.
- Improve fingerprint data security and storage.

👥 Contributors
- Martin Emmanuel Chang: Hardware and Programming
- Grace Theofie: Powerpoint and Documents
- Mastri Tasya Napitupulu: Powerpoint and Documents
- Priscilla Green Samosir: Powerpoint and Documents

Institution: Calvin Institute of Technology, 2023
