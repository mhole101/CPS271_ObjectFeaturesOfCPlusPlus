//*******************************************************************************************************************//
//*******************************************************************************************************************//
//                                                                                                                   //
//                                                                                                                   //
//                                                 CPS 271 MP1.1                                                       //
//                                                                                                                   //
//                                                  By: Matt Hole                                                    //
//                                                                                                                   //
//                                           Created:   September 6th, 2020                                          //
//                                                                                                                   //
//                                                                                                                   //
//*******************************************************************************************************************//
//*******************************************************************************************************************//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Function prototypes

double power(double, int p = 2);
long hms_to_sec(int, int, int);
void swap(int&, int&);

const int ZERO = 0;


int main()
{
	double PowerSolution, n;
	int p;
	string hms = "";
	long totalSec;
	int hour, minutes, seconds;
	int int1, int2;
	
	//power function logic
	cout << "Input a value to be raised to the power of p then press enter" << endl;
	cin >> n;
	cout << "\nInput a value of p then press enter\n"; 
	cin >> p;

	PowerSolution = power(n, p);

	cout << "The solution is: " << PowerSolution << endl << endl;


	//hms_to_seconds logic	
	do
	{
		cout << "Please input the time in 24 hour format\n";
		cout << "This will run until a negative number is input for hour\n";
		cout << "\nEnter the hour of the day\n";
		cin >> hour; // user input
		cout << "\nPlease enter the minutes\n";
		cin >> minutes; // user input
		cout << "\nPlease enter the seconds\n";
		cin >> seconds; // user input
		
		totalSec = hms_to_sec(hour, minutes, seconds); // hms funciton call
		
		if (totalSec <= 0)
			cout << "\nhms_to_sec function aborted\n";
		else
			cout << "Total seconds of day:\n" << totalSec << endl << endl;
		
	
	} while (hour >= 0);


	// swap logic
	cout << "\nEnter an integer value and press enter" << endl;
	cin >> int1; // user input
	cout << "\nEnter another integer and press enter" << endl;
	cin >> int2; // user input
	
	cout << "\nint1 value is: " << int1 << "\nint2 value is: " << int2 << endl;

	swap(int1, int2); // swap function call

	cout << "\nAfter swap function " << endl;
	cout << "\nint1 value is: " << int1 << "\nint2 value is: " << int2 << endl;

	return 0;
}

// funtion definitions

//power function
//This function takes a number n and raises it to the power p
double power(double n, int p)
{
	double solution = n;
	int i;

	if (p == ZERO) // Sets solution to 1 if p is equal to 0
	{
		solution = 1;
		return solution;
	}
	else
	{
		if(p < ZERO) // Calculates solution if p is negative
		{
			i = -1;
			do
			{
				solution = solution * n;
				i = i--;
			} 
			while (i > p);
			
			solution = 1 / solution;
			return solution;

		}
		else
		{
			if (p > ZERO) // Calculates solution if p is positive
			{
				i = 1;
				do
				{
					solution = solution * n;
					i = i++;
				} while (i < p);

				return solution;
			}
		}				
	}

	

}

//hms_to_sec function
//This funtion takes hours, minutes, and seconds of the day and
//converts it to total seconds of the day
long hms_to_sec(int h, int m, int s)
{
	long seconds = 0;

	seconds = h * 60 * 60 + m * 60 + s;

	return seconds;

}

//swap function
//This function takes two integers and swaps their values through
//the use of passed by reference
void swap(int& int1, int& int2)
{
	int numHold = int1;
	int1 = int2;
	int2 = numHold;
}
