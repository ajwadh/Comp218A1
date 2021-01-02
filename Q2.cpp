// -----------------------------------------------------
// Assignment: 1
// Question: 2
// File name: Assignment1.cpp
// Written by: Ajwad Hossain 
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

// Input the number a number of seconds with 5 digits and output hours, minutes and seconds equivalent 
// by swapping the first and last digits of the input

#include <iostream>		// for cin, cout
#include <cmath>

using namespace std;

int main()
{
	// Declare Variables
	int seconds;
	
	// Welcome message
	cout<< "**************************************************\n"
		<< "Welcome to Time Converter Program\n"
		<< "**************************************************\n\n";
	cout << "Please enter the seconds which will be converted:";

	// Inputting seconds
	cin >> seconds;

	// Get the last digit from number
	int lastDigit = seconds % 10;
	int digits = 4;

	// Switch first and last digit
	int firstDigit = (int)(seconds / pow(10, digits));
	int switchNumber;
	switchNumber = lastDigit;
	switchNumber *= (int)pow(10, digits);
	switchNumber += seconds % ((int)pow(10, digits));
	switchNumber -= lastDigit;
	switchNumber += firstDigit;
	cout << "\nThe swapped sequence of the time is " << switchNumber << endl;

	// get the hours minutes second from swapped number
	int minutes, second, hours;
	hours = switchNumber / 3600;
	switchNumber %= 3600;
	minutes = switchNumber = 60;
	switchNumber %= 60;
	second = switchNumber;

	// Output results
	cout << "\nThe corresponding hours, minutes, seconds is " << hours << " hrs, " << minutes << " mins, " << second << " secs" << endl;

	// Farewell message
	cout << "\nThank you for using the Time Converter Program";

	return 0;
}