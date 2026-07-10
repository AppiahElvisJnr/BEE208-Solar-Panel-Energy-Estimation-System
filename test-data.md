# Test Data – Solar Panel Energy Estimation System

## Project Information

**Project Title:** Solar Panel Energy Estimation System

**Course Code:** BEE 208

**Course:** C++ Programming

---

# Purpose

This document contains the test cases used to verify the correctness, accuracy, and reliability of the Solar Panel Energy Estimation System. The tests cover both valid and invalid input scenarios to ensure the program performs as expected.

---

# Test Case 1 – High Solar Energy Output

| Input | Value |
|-------|------:|
| System Name | School ICT Lab Solar Backup |
| Panel Wattage | 400 W |
| Number of Panels | 6 |
| Sunlight Hours | 5.5 Hours |
| Efficiency | 80 % |

### Calculation

```
Total Panel Capacity

= 400 × 6

= 2400 W

Daily Energy Output

= 2400 × 5.5 × 80 ÷ 100

= 10560 Wh
```

### Expected Output

```
Classification:
High Solar Energy Output
```

**Result:** ✅ Passed

---

# Test Case 2 – Moderate Solar Energy Output

| Input | Value |
|-------|------:|
| System Name | Office Solar System |
| Panel Wattage | 250 W |
| Number of Panels | 4 |
| Sunlight Hours | 5 Hours |
| Efficiency | 80 % |

### Calculation

```
Capacity

= 250 × 4

= 1000 W

Energy

= 1000 × 5 × 80 ÷ 100

= 4000 Wh
```

### Expected Output

```
Classification:
Moderate Solar Energy Output
```

**Result:** ✅ Passed

---

# Test Case 3 – Low Solar Energy Output

| Input | Value |
|-------|------:|
| System Name | Home Backup |
| Panel Wattage | 100 W |
| Number of Panels | 2 |
| Sunlight Hours | 4 Hours |
| Efficiency | 80 % |

### Calculation

```
Capacity

= 100 × 2

= 200 W

Energy

= 200 × 4 × 80 ÷ 100

= 640 Wh
```

### Expected Output

```
Classification:
Low Solar Energy Output
```

**Result:** ✅ Passed

---

# Test Case 4 – Invalid Panel Wattage

| Input | Value |
|-------|------:|
| Panel Wattage | -200 W |

### Expected Result

```
Error:
Panel wattage must be greater than zero.
```

**Result:** ✅ Passed

---

# Test Case 5 – Invalid Number of Panels

| Input | Value |
|-------|------:|
| Number of Panels | 0 |

### Expected Result

```
Error:
Number of panels must be greater than zero.
```

**Result:** ✅ Passed

---

# Test Case 6 – Invalid Sunlight Hours

| Input | Value |
|-------|------:|
| Sunlight Hours | -5 Hours |

### Expected Result

```
Error:
Sunlight hours cannot be negative.
```

**Result:** ✅ Passed

---

# Test Case 7 – Invalid Efficiency

| Input | Value |
|-------|------:|
| Efficiency | 120 % |

### Expected Result

```
Error:
Efficiency must be between 0 and 100.
```

**Result:** ✅ Passed

---

# Test Summary

| Test Case | Description | Status |
|-----------|-------------|--------|
| Test Case 1 | High Energy Output | ✅ Passed |
| Test Case 2 | Moderate Energy Output | ✅ Passed |
| Test Case 3 | Low Energy Output | ✅ Passed |
| Test Case 4 | Invalid Panel Wattage | ✅ Passed |
| Test Case 5 | Invalid Number of Panels | ✅ Passed |
| Test Case 6 | Invalid Sunlight Hours | ✅ Passed |
| Test Case 7 | Invalid Efficiency | ✅ Passed |

---

# Conclusion

All test cases produced the expected results. The application correctly:

- Accepts valid user input.
- Rejects invalid input values.
- Calculates the total panel capacity accurately.
- Computes the daily energy output correctly.
- Classifies the output as **Low**, **Moderate**, or **High**.
- Displays a complete solar energy report.
- Saves the report to **solar_energy_report.txt**.

The successful execution of these test cases demonstrates that the Solar Panel Energy Estimation System functions correctly and satisfies the project requirements.
