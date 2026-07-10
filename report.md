# Solar Panel Energy Estimation System

## BEE 208 – C++ Programming Mid-Semester Practical Project

### Accra Technical University
**Faculty:** Engineering

**Department:** Electrical/Electronic Engineering

**Course Code:** BEE 208

**Course Title:** C++ Programming

**Project:** Mid-Semester Practical Project Examination – Project 4

**Lecturer:** Douglas Ayitey

---

# Group Members

| No. | Student Name | Index Number |
|-----|--------------|--------------|
| 1 | Appiah Elvis Jnr         | 01240056B  |
| 2 | Amegbleto Doe Tony       | 01243173B  |
| 3 | Nkansah Yaw Agyei Tannor | 01244841B  |
| 4 | Fianko Collins Okyere    | 01245114B  |
| 5 | Elvis Acquah             | 01244477B  |
| 6 | Quist Basil Jasper       | 01242345B  |
| 7 | Gyekye Kelvin Paa Kojo   | 01246001B  |
| 8 | Hammond Amamu Ekow       | 01240003B  |
| 9 | Ganyo-Mensah Roland Yaw  | 01242264B  |
| 10| Martell Cobblah         | 01244108B  |

---

# Introduction

Solar energy is one of the fastest-growing renewable energy sources used for homes, schools, offices, hospitals, and industries. Before installing a solar power system, it is important to estimate the amount of electrical energy that can be produced daily.

This project develops a C++ application known as the **Solar Panel Energy Estimation System**. The application enables users to estimate the expected daily energy output of a solar panel installation using panel wattage, the number of panels, average sunlight hours, and system efficiency. The system performs calculations, classifies the energy output, displays a detailed report, and saves the results to a text file.

---

# Problem Statement

Many individuals and organizations purchase or install solar panels without first estimating the amount of electrical energy the system can generate each day. As a result, users may install systems that are too small or unnecessarily expensive.

This project addresses the problem by providing a simple C++ application that calculates the expected daily solar energy output based on user input. It also classifies the energy production level and stores the report for future reference.

---

# Aim

The aim of this project is to develop a C++ Solar Panel Energy Estimation System that calculates the expected daily energy output of a solar panel setup based on panel wattage, number of panels, sunlight hours, and system efficiency.

---

# Objectives

The objectives of this project are to:

- Identify the input, processing, and output requirements of the system.
- Design an algorithm for the application.
- Develop pseudocode for the system.
- Create a flowchart representing the program logic.
- Develop the application using C++ classes and functions.
- Validate user input.
- Calculate total panel capacity.
- Calculate daily solar energy output.
- Classify the energy output.
- Save the report to a text file.
- Document the project using GitHub and Markdown.

---

# System Requirements

## Software Requirements

- Visual Studio Code / Code::Blocks / Dev-C++
- C++ Compiler (GCC or MinGW)
- Git
- GitHub Account

## Hardware Requirements

- Personal Computer
- Keyboard
- Monitor
- Storage Device

---

# Algorithm

## Summary

1. Start the program.
2. Display the project title.
3. Input solar panel details.
4. Validate all inputs.
5. Calculate total panel capacity.
6. Calculate daily energy output.
7. Classify the output.
8. Display the solar energy report.
9. Save the report to a text file.
10. Ask whether another calculation should be performed.
11. Stop the program.

---

# Pseudocode

```text
BEGIN

Display Project Title

Input Solar System Details

Validate Inputs

IF Valid THEN

    Capacity ← Panel Wattage × Number of Panels

    Energy ← Capacity × Sunlight Hours × Efficiency ÷ 100

    IF Energy < 1000 THEN
        Classification ← Low
    ELSE IF Energy ≤ 5000 THEN
        Classification ← Moderate
    ELSE
        Classification ← High
    ENDIF

    Display Report

    Save Report

ELSE

    Display Invalid Input

ENDIF

END
```

---

# Flowchart

START
   ↓
Input Details
   ↓
Validate
   ↓
Calculate
   ↓
Classify
   ↓
Display Report
   ↓
Save Report
   ↓
STOP
```

> **Replace this section with your `flowchart.png` image before submission.**

---

# Explanation of the C++ Implementation

The project was developed using object-oriented programming principles in C++.

## Class

A class named **SolarPanel** was created to represent the solar energy estimation system.

The class stores the following private data members:

- System Name
- Panel Wattage
- Number of Panels
- Sunlight Hours
- Efficiency
- Total Panel Capacity
- Daily Energy Output

---

## Functions

The following member functions were implemented:

### setSolarDetails()

Accepts all user inputs.

### validateDetails()

Checks that:

- Panel wattage is greater than zero.
- Number of panels is greater than zero.
- Sunlight hours are not negative.
- Efficiency is between 0 and 100%.

### calculateEnergyOutput()

Calculates:

```
Total Capacity = Panel Wattage × Number of Panels
```

and

```
Daily Energy Output =
Total Capacity × Sunlight Hours × Efficiency ÷ 100
```

### classifyOutput()

Determines whether the output is:

- Low
- Moderate
- High

### displaySolarReport()

Displays a formatted report containing all calculations.

### saveReportToFile()

Stores the report in **solar_energy_report.txt** using file handling (`ofstream`).

---

# C++ Concepts Used

The application demonstrates the following C++ concepts:

- Input and Output (`cin`, `cout`)
- Variables
- Data Types
- Arithmetic Operators
- Conditional Statements (`if`, `else if`, `else`)
- Loops (`do-while`)
- Functions
- Classes and Objects
- File Handling (`ofstream`)
- Input Validation

---

# Sample Input

| Item | Value |
|------|-------|
| System Name | School ICT Lab Solar Backup |
| Panel Wattage | 400 W |
| Number of Panels | 6 |
| Sunlight Hours | 5.5 |
| Efficiency | 80% |

---

# Sample Output

```
SOLAR ENERGY REPORT

System Name: School ICT Lab Solar Backup

Panel Wattage: 400 W

Number of Panels: 6

Total Panel Capacity: 2400 W

Sunlight Hours: 5.5 hours

Efficiency: 80%

Estimated Daily Energy Output: 10560 Wh

Output Classification:
High Solar Energy Output

Report saved successfully.
```

---

# Testing

The program was tested with various input values.

| Test Case | Expected Result | Status |
|-----------|-----------------|--------|
| Valid values | Correct calculations | Passed |
| Negative wattage | Error message | Passed |
| Zero panels | Error message | Passed |
| Negative sunlight hours | Error message | Passed |
| Efficiency above 100% | Error message | Passed |

---

# Conclusion

The Solar Panel Energy Estimation System successfully estimates the expected daily energy output of a solar panel installation. The application validates user inputs, performs accurate calculations, classifies the output, displays a comprehensive report, and saves the results to a text file. The project demonstrates the practical application of C++ programming concepts including object-oriented programming, functions, loops, conditional statements, and file handling.

---

# Future Improvements

Future versions of the application may include:

- Graphical User Interface (GUI)
- Database integration
- Monthly and yearly energy estimation
- Solar battery sizing
- Cost estimation
- Solar panel recommendation system
- Automatic report generation in PDF format
