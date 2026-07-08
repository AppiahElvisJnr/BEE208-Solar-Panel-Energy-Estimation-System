# Solar Panel Energy Estimation System

## BEE 208 – C++ Programming Mid-Semester Practical Project

### Accra Technical University
**Faculty of Engineering**

**Department of Electrical/Electronic Engineering**

---

## Project Information

| Item | Details |
|------|---------|
| **Course Code** | BEE 208 |
| **Course Title** | C++ Programming |
| **Project Title** | Solar Panel Energy Estimation System |
| **Project Category** | Technical |
| **Programming Language** | C++ |
| **Lecturer** | Douglas Ayitey |

---

# Project Description

The **Solar Panel Energy Estimation System** is a C++ application developed to estimate the expected daily electrical energy produced by a solar panel installation.

The program allows users to enter the specifications of a solar power system, including the panel wattage, number of panels, average sunlight hours, and system efficiency. It then calculates the estimated daily energy output, classifies the output level, displays a detailed report, and saves the report to a text file.

This project demonstrates the practical application of object-oriented programming concepts in C++.

---

# Project Objectives

The project aims to:

- Estimate daily solar energy production.
- Calculate the total solar panel capacity.
- Classify energy output as Low, Moderate, or High.
- Validate user input.
- Save the generated report to a text file.
- Demonstrate the use of C++ programming concepts.

---

# Features

- User-friendly console interface
- Input validation
- Object-Oriented Programming (Classes and Objects)
- Functions
- Conditional Statements
- Loops for repeated calculations
- File Handling
- Automatic energy classification
- Report generation

---

# Formula Used

## Total Panel Capacity

```
Total Panel Capacity = Panel Wattage × Number of Panels
```

## Daily Energy Output

```
Daily Energy Output =
Total Panel Capacity × Sunlight Hours × Efficiency ÷ 100
```

---

# Energy Classification

| Daily Energy Output | Classification |
|--------------------|----------------|
| Less than 1000 Wh | Low Solar Energy Output |
| 1000 Wh – 5000 Wh | Moderate Solar Energy Output |
| Above 5000 Wh | High Solar Energy Output |

---

# C++ Concepts Used

- Variables and Data Types
- Input and Output (`cin`, `cout`)
- Arithmetic Operators
- Conditional Statements (`if`, `else if`, `else`)
- Loops (`do-while`)
- Functions
- Classes and Objects
- File Handling (`ofstream`)
- Input Validation

---

# Project Structure

```
BEE208-Solar-Panel-Energy-Estimation-System
│
├── README.md
├── main.cpp
├── algorithm.md
├── pseudocode.md
├── flowchart.png
├── report.md
├── sample-output.png
├── test-data.md
├── solar_energy_report.txt
├── group-contribution.md
└── screenshots
    ├── input-screen.png
    ├── output-screen.png
    └── file-output.png
```

---

# Sample Input

| Input | Value |
|------|------|
| System Name | School ICT Lab Solar Backup |
| Panel Wattage | 400 W |
| Number of Panels | 6 |
| Sunlight Hours | 5.5 hours |
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

Output Classification: High Solar Energy Output

Report saved successfully to solar_energy_report.txt
```

---

# Requirements

To run this project, you need:

- C++ Compiler (GCC, MinGW, or MSVC)
- Visual Studio Code, Code::Blocks, Dev-C++, or Visual Studio
- Git (optional)
- GitHub Account (for submission)

---

# How to Compile

Using **g++**:

```bash
g++ main.cpp -o SolarPanelSystem
```

Run the program:

```bash
./SolarPanelSystem
```

For Windows:

```bash
SolarPanelSystem.exe
```

---

# Expected Output

The application will:

- Accept user input.
- Validate all inputs.
- Calculate total panel capacity.
- Calculate daily energy output.
- Classify the output.
- Display a detailed report.
- Save the report to **solar_energy_report.txt**.
- Allow multiple calculations.

---

# Future Improvements

Possible enhancements include:

- Graphical User Interface (GUI)
- Database integration
- Monthly and yearly energy estimation
- Solar battery sizing
- Cost estimation
- Solar panel recommendation system
- PDF report generation

---

# Authors

**Group Number:** ___________________

| Student Name       | Index Number       ||  Role/Contribution | 
| __________________ | __________________ || __________________ | 
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |
| __________________ | __________________ || __________________ |

---

# License

This project was developed for academic purposes as part of the **BEE 208 C++ Programming Mid-Semester Practical Project** at **Accra Technical University**.
