# Algorithm – Solar Panel Energy Estimation System

## Flow Algorithm

```text
START
   │
   ▼
Display Project Title
   │
   ▼
Input Solar System Details
   │
   ▼
Validate Inputs
   │
   ├── Invalid? ──► Display Error ──► Input Again
   │
   ▼
Calculate Total Panel Capacity
   │
   ▼
Calculate Daily Energy Output
   │
   ▼
Classify Output (Low / Moderate / High)
   │
   ▼
Display Solar Energy Report
   │
   ▼
Save Report to solar_energy_report.txt
   │
   ▼
Another Calculation? (Y/N)
   │
   ├── Yes ─────────► Repeat
   │
   ▼
Display Closing Message
   │
   ▼
STOP
```

---

## Step-by-Step Algorithm

1. **Start** the program.
2. Display the project title **"SOLAR PANEL ENERGY ESTIMATION SYSTEM"**.
3. Prompt the user to enter the following details:
   - Solar System Name
   - Panel Wattage (W)
   - Number of Panels
   - Average Sunlight Hours
   - System Efficiency (%)
4. Validate the user inputs:
   - Panel Wattage must be greater than 0.
   - Number of Panels must be greater than 0.
   - Sunlight Hours must not be negative.
   - Efficiency must be between 0% and 100%.
5. If any input is invalid:
   - Display an appropriate error message.
   - Prompt the user to enter the values again.
6. Calculate the **Total Panel Capacity** using the formula:

   **Total Panel Capacity = Panel Wattage × Number of Panels**

7. Calculate the **Daily Energy Output** using the formula:

   **Daily Energy Output = Total Panel Capacity × Sunlight Hours × Efficiency ÷ 100**

8. Classify the Daily Energy Output:
   - Less than **1000 Wh** → **Low Solar Energy Output**
   - **1000 Wh – 5000 Wh** → **Moderate Solar Energy Output**
   - Above **5000 Wh** → **High Solar Energy Output**
9. Display the complete Solar Energy Report showing:
   - System Name
   - Panel Wattage
   - Number of Panels
   - Total Panel Capacity
   - Sunlight Hours
   - Efficiency
   - Daily Energy Output
   - Output Classification
10. Save the report to **solar_energy_report.txt**.
11. Ask the user:

    **"Do you want to perform another calculation? (Y/N)"**

12. If the user enters **Y** or **y**, repeat the process from Step 3.
13. Otherwise, display a closing message:

    **"Thank you for using the Solar Panel Energy Estimation System."**

14. **Stop** the program.

---

## Algorithm Summary

- Accept solar panel details from the user.
- Validate all inputs.
- Calculate the total panel capacity.
- Calculate the estimated daily energy output.
- Classify the energy output.
- Display the report.
- Save the report to a text file.
- Allow the user to perform additional calculations.
- End the program.
