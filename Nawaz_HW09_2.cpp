/*
Filename: HW_09_2
Purpose: Program that takes the contents of a file and displays it on the screen
Author: Ilya Nawaz
Date modified: 10/20/2024
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine;
    int lineNumber = 1;

    cout << "Enter the input file name: ";
    cin >> inName;

    inFile.open(inName);

    if (!inFile)
    {
        cout << "Error opening file " << inName << endl;
        return 1;
    }

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber << ": " << inputLine << endl;
        
        lineNumber++;
    }

    inFile.close();

    return 0;
}