#include <iostream>   
#include <fstream>   
#include <string>    
using namespace std;

int main() {
    string townName;      // To store the name of the town
    string fileName;      // To store the name of the data file
    int year, population; // To store year and population data
    ifstream dataFile;    // Object to read data from the file

    // Ask the user for the name of the town
    cout << "Enter the name of the town: ";
    getline(cin, townName);  // This reads the full town name (including spaces)

    // Ask for the name of the data file
    cout << "Enter the name of the data file: ";
    getline(cin, fileName);  // This reads the file name

    // Open the data file
    dataFile.open(fileName);

    // Check if the file opened successfully
    if (!dataFile) {
        cout << "Error: Could not open the file " << fileName << ". Please check the file name.\n";
        return 1; // Exit the program if the file can't be opened
    }

    // Print the title of the chart
    cout << "\n" << townName << " Population Growth\n";
    cout << "(Each * represents 1,000 people)\n\n";

    // Read data from the file line by line
    while (dataFile >> year >> population) {
        // Print the year and a bar chart of asterisks
        cout << year << " ";  // Print the year
        for (int i = 0; i < population / 1000; ++i) {
            cout << "*";  // Print one asterisk for every 1,000 people
        }
        cout << endl;  // Move to the next line after each year
    }

    // Close the file after reading the data
    dataFile.close();

    return 0; // Indicate successful program execution
}

        