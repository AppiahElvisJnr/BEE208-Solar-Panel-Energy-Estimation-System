# Pseudocode – Solar Panel Energy Estimation System

## Project: Solar Panel Energy Estimation System

```text
BEGIN

    Display "=========================================="
    Display " SOLAR PANEL ENERGY ESTIMATION SYSTEM "
    Display "=========================================="

    REPEAT

        Input Solar System Name
        Input Panel Wattage
        Input Number of Panels
        Input Sunlight Hours
        Input System Efficiency

        IF Panel Wattage <= 0 OR
           Number of Panels <= 0 OR
           Sunlight Hours < 0 OR
           Efficiency < 0 OR
           Efficiency > 100 THEN

            Display "Invalid input. Please enter valid values."

        ELSE

            Capacity ← Panel Wattage × Number of Panels

            Energy ← Capacity × Sunlight Hours × Efficiency ÷ 100

            IF Energy < 1000 THEN

                Classification ← "Low Solar Energy Output"

            ELSE IF Energy <= 5000 THEN

                Classification ← "Moderate Solar Energy Output"

            ELSE

                Classification ← "High Solar Energy Output"

            ENDIF

            Display "----------- SOLAR ENERGY REPORT -----------"
            Display Solar System Name
            Display Panel Wattage
            Display Number of Panels
            Display Capacity
            Display Sunlight Hours
            Display Efficiency
            Display Energy
            Display Classification

            Save report to "solar_energy_report.txt"

            Display "Report saved successfully."

        ENDIF

        Input "Do you want to perform another estimation? (Y/N): " → Choice

    UNTIL Choice = 'N' OR Choice = 'n'

    Display "Thank you for using the Solar Panel Energy Estimation System."

END
```

---

## Pseudocode Summary

The pseudocode performs the following operations:

1. Displays the project title.
2. Accepts the solar system details from the user.
3. Validates all input values.
4. Calculates the total panel capacity.
5. Calculates the estimated daily energy output.
6. Classifies the energy output as **Low**, **Moderate**, or **High**.
7. Displays a complete solar energy report.
8. Saves the report to **solar_energy_report.txt**.
9. Allows the user to perform multiple energy estimations.
10. Ends the program when the user chooses to exit.
