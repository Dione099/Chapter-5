#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;

int main() {
    // Variables for input and calculations
    int startingSize;
    double dailyIncrease;
    int numDays;

    // Input: Starting size of the population
    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startingSize;
        if (startingSize < 2) {
            cout << "Error: Starting size must be at least 2.\n";
        }
    } while (startingSize < 2);

    // Input: Average daily population increase
    do {
        cout << "Enter the average daily population increase (as a percentage, e.g., 5 for 5%): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "Error: Daily increase cannot be negative.\n";
        }
    } while (dailyIncrease < 0);

    // Input: Number of days the organisms will multiply
    do {
        cout << "Enter the number of days they will multiply (minimum 1): ";
        cin >> numDays;
        if (numDays < 1) {
            cout << "Error: Number of days must be at least 1.\n";
        }
    } while (numDays < 1);

    // Convert daily increase percentage to a decimal
    dailyIncrease = dailyIncrease / 100;

    // Display header for population growth table
    cout << "\nDay\tPopulation\n";
    cout << "-----------------\n";

    // Loop to calculate and display population for each day
    double population = startingSize;
    for (int day = 1; day <= numDays; ++day) {
        cout << day << "\t" << std::fixed << std::setprecision(2) << population << endl;
        population += population * dailyIncrease; // Calculate the next day's population
    }

    return 0;
}

