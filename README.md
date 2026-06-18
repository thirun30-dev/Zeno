# Zeno – Self-Balancing Robot 

Zeno is a two-wheeled self-balancing robot designed to maintain stability using real-time sensor feedback and closed-loop PID control. Built around the Arduino Nano platform, Zeno continuously monitors its orientation using an MPU6050 Inertial Measurement Unit (IMU) and dynamically adjusts motor speed to remain balanced.

The robot is powered by N20 3V 500 RPM Micro Metal Gear Motors equipped with quadrature encoders, enabling precise speed and position feedback. Motor control is handled through the DRV8833 dual motor driver, providing efficient and compact control of the drive system.

This project serves as a practical implementation of robotics, control systems, embedded programming, and sensor integration. Zeno demonstrates how real-time feedback and control algorithms can be used to create dynamically stable robotic systems.

## Features

* Two-wheel self-balancing using PID control
* Real-time tilt angle estimation with MPU6050
* Encoder-based motor feedback for improved stability
* Differential drive control using DRV8833 motor driver
* Arduino Nano-based embedded system
* Tunable PID parameters for performance optimization
* Compact and lightweight design
* Expandable platform for autonomous navigation and obstacle avoidance

## Hardware Components

* Arduino Nano
* MPU6050 Accelerometer & Gyroscope Sensor
* DRV8833 Dual Motor Driver
* 2 × N20 3V 500 RPM Micro Metal Gear Motors with Encoders
* Wheels and Robot Chassis
* Rechargeable Battery Pack
* Power Management Circuitry

## Working Principle

The MPU6050 continuously measures the robot's tilt angle and angular velocity. A PID controller processes this data and determines the necessary motor corrections required to maintain an upright position. Encoder feedback from the N20 motors provides additional accuracy by monitoring wheel movement and motor speed, resulting in smoother balancing performance.

## Applications

* Robotics Education
* Control Systems Learning
* Embedded Systems Development
* Autonomous Mobile Robot Research
* Sensor Fusion and PID Tuning Experiments

## Future Improvements

* Bluetooth/Wi-Fi Remote Control
* Mobile App Integration
* Obstacle Detection and Avoidance
* Autonomous Navigation
* Data Logging and Telemetry
* ROS Integration

### Project Name

**Zeno — A Self-Balancing Robot Powered by Precision Control and Real-Time Feedback**
