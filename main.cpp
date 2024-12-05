#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string townName;
    string fileName;
    int year, population;

    cout << "Enter the name of the data file: ";
    getline(cin, fileName);

    cout << "Enter the name of the town: ";
    getline(cin, townName);

    cout<< "Enter the name of the data file: ";
   getline(cin,fileName);

    ifstream dataFile(fileName);

    if (!dataFile){
        cout << "Error opening file." << fileName << endl;
        return 1;
    }
    // Print the header
        cout << "\n" << townName << " Population Growth\n";
        cout << "(Each * represents 1,000 people)\n\n";

        // Read and process the file contents
        while (dataFile >> year >> population) {
            // Display the year
            cout << year << " ";

            // Display the bar chart
            for (int i = 0; i < population / 1000; i++) {
                cout << "*";
            }
            cout << endl; // Move to the next line
        }

        // Close the file
        dataFile.close();

        return 0;
    }