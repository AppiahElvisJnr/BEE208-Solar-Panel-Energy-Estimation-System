#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class SolarPanel
{
private:
    string systemName;
    double panelWattage;
    int numberOfPanels;
    double sunlightHours;
    double efficiency;
    double totalCapacity;
    double dailyEnergyOutput;

public:

    void setSolarDetails()
    {
        cin.ignore();

        cout << "\nEnter Solar System Name: ";
        getline(cin, systemName);

        cout << "Enter Panel Wattage (W): ";
        cin >> panelWattage;

        cout << "Enter Number of Panels: ";
        cin >> numberOfPanels;

        cout << "Enter Average Sunlight Hours: ";
        cin >> sunlightHours;

        cout << "Enter System Efficiency (%): ";
        cin >> efficiency;
    }

    bool validateDetails()
    {
        if(panelWattage <= 0)
        {
            cout << "Error: Panel wattage must be greater than zero.\n";
            return false;
        }

        if(numberOfPanels <= 0)
        {
            cout << "Error: Number of panels must be greater than zero.\n";
            return false;
        }

        if(sunlightHours < 0)
        {
            cout << "Error: Sunlight hours cannot be negative.\n";
            return false;
        }

        if(efficiency < 0 || efficiency > 100)
        {
            cout << "Error: Efficiency must be between 0 and 100.\n";
            return false;
        }

        return true;
    }

    void calculateEnergyOutput()
    {
        totalCapacity = panelWattage * numberOfPanels;

        dailyEnergyOutput =
        totalCapacity * sunlightHours * efficiency / 100.0;
    }

    string classifyOutput()
    {
        if(dailyEnergyOutput < 1000)
            return "Low Solar Energy Output";

        else if(dailyEnergyOutput <= 5000)
            return "Moderate Solar Energy Output";

        else
            return "High Solar Energy Output";
    }

    void displaySolarReport()
    {
        cout << "\n========================================";
        cout << "\n      SOLAR ENERGY REPORT";
        cout << "\n========================================";

        cout << "\nSystem Name            : " << systemName;
        cout << "\nPanel Wattage          : " << panelWattage << " W";
        cout << "\nNumber of Panels       : " << numberOfPanels;
        cout << "\nTotal Panel Capacity   : " << totalCapacity << " W";
        cout << "\nSunlight Hours         : " << sunlightHours << " hours";
        cout << "\nEfficiency             : " << efficiency << "%";
        cout << "\nDaily Energy Output    : "
             << fixed << setprecision(2)
             << dailyEnergyOutput << " Wh";

        cout << "\nOutput Classification  : "
             << classifyOutput();

        cout << "\n========================================\n";
    }

    void saveReportToFile()
    {
        ofstream file("solar_energy_report.txt");

        file << "SOLAR ENERGY REPORT\n";
        file << "==============================\n";
        file << "System Name: " << systemName << endl;
        file << "Panel Wattage: " << panelWattage << " W" << endl;
        file << "Number of Panels: " << numberOfPanels << endl;
        file << "Total Panel Capacity: " << totalCapacity << " W" << endl;
        file << "Sunlight Hours: " << sunlightHours << endl;
        file << "Efficiency: " << efficiency << "%" << endl;
        file << "Daily Energy Output: "
             << fixed << setprecision(2)
             << dailyEnergyOutput << " Wh" << endl;
        file << "Classification: "
             << classifyOutput() << endl;

        file.close();

        cout << "\nReport saved successfully to solar_energy_report.txt\n";
    }
};

int main()
{
    char choice;

    cout << "==============================================\n";
    cout << " SOLAR PANEL ENERGY ESTIMATION SYSTEM\n";
    cout << "==============================================\n";

    do
    {
        SolarPanel solar;

        solar.setSolarDetails();

        if(solar.validateDetails())
        {
            solar.calculateEnergyOutput();
            solar.displaySolarReport();
            solar.saveReportToFile();
        }

        cout << "\nDo you want to perform another estimation? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    cout << "\nThank you for using the Solar Panel Energy Estimation System.\n";

    return 0;
}
