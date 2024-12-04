#include <iostream>
#include <fstream>  // For file input
#include <string>   // For handling strings
using namespace std;

int main() {
    string studentName;      // To hold the current student's name
    string firstStudent;     // To hold the first student in alphabetical order
    string lastStudent;      // To hold the last student in alphabetical order
    int studentCount = 0;    // To count the number of students

    // Open the file
    ifstream inputFile("LineUp.txt");

    // Check if the file opened successfully
    if (!inputFile) {
        cout << "Error: Could not open the file 'LineUp.txt'. Please make sure it exists.\n";
        return 1; // Exit the program with an error code
    }

    // Read the first name to initialize
    if (inputFile >> studentName) {
        firstStudent = studentName;
        lastStudent = studentName;
        studentCount++;
    } else {
        // If the file is empty
        cout << "The file 'LineUp.txt' is empty.\n";
        return 0; // Exit the program
    }

    // Process the rest of the names
    while (inputFile >> studentName) {
        studentCount++;
        if (studentName < firstStudent) {
            firstStudent = studentName; // Update the first student
        }
        if (studentName > lastStudent) {
            lastStudent = studentName; // Update the last student
        }
    }

    // Close the file
    inputFile.close();

    // Display the results
    cout << "Number of students in the class: " << studentCount << endl;
    cout << "Student at the front of the line: " << firstStudent << endl;
    cout << "Student at the end of the line: " << lastStudent << endl;

    return 0;
}

        