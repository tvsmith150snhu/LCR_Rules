/*
Troy Smith
IT-312-J4007
2022.04.10
6-3 Final Project Building Block Four: Programming (Reading From a File)
*/

/*
LCR Rules Reader

This C++ program opens the rules file for the LCR Dice game
and displays it to the user*/

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

//Main Function
int main()
{
	// Declare Variables
	string line;
	ifstream file("rules.txt"); // Specify file here

	// Print opening line
	cout << "The LCR rules are as follows :" << endl;
		if (file.is_open())
		{
			// If the file can be opened, read and store the text, line by line
			while (getline(file, line)) //while lines are still there in the file
			{
				// Print each line with a space between each section of the file
				cout << line << ' ' << endl << endl;
			}
			file.close(); // Close file after use
		}
		else
		{
			// If the file can't be found or opened, notify the user
			cout << "Cannot open file";
		}

	return 0;
}