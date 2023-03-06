//*******************************************************************************************************************//
//*******************************************************************************************************************//
//                                                                                                                   //
//                                                                                                                   //
//                                                 CPS 271 MP2                                                       //
//                                                                                                                   //
//                                                  By: Matt Hole                                                    //
//                                                                                                                   //
//                                           Created:   September 13th, 2020                                         //
//                                                                                                                   //
//                     This program uses classes to add, subtract, multiply, and divide fractions.                   //
//                                                                                                                   //
//*******************************************************************************************************************//
//*******************************************************************************************************************//

#include<iostream>
#include<cmath>
#include<string>
#include "Fraction.h"

using namespace std;

// Function Prototypes
void showMenus();
void getOper(char&);


int main()
{
	Fraction f1, f2, f3; 
	char mathOper;

	cout << "This program will add, subtract, multiply, or divide two fractions\n"; // Informs user of programs intent.

	do // loop to keep program running until user decides to stop
	{
		showMenus(); // displays choices users can make
		getOper(mathOper); // takes users input and saves it in a variable for operation selection
		

		switch (mathOper) // math operator selection
		{
		case '1': // addition
			f1.Input();
			f2.Input();
			f3.Add(f1, f2);
			f3.Print();
			break;
		case '2': // subtraction
			f1.Input();
			f2.Input();
			f3.Sub(f1, f2);
			f3.Print();
			break;
		case '3': // multiplication
			f1.Input();
			f2.Input();
			f3.Mul(f1, f2);
			f3.Print();
			break;
		case '4': // division
			f1.Input();
			f2.Input();
			f3.Div(f1, f2);
			f3.Print();
			break;
		case 'q': // quit program
			cout << "Program ended\n";
			break;
		case 'Q': // quit program
			cout << "Program ended\n";
			break;
		default: 
			cout << "Error" << endl;
		}
	} while (mathOper != 'Q' && mathOper != 'q'); // expression to quit loop

	return 0;
}

// This function prompts the menus to the user
void showMenus()
{
	cout << "Please make a selection from the following:\n";
	cout << "1: Add two fractions\n";
	cout << "2: Subtract two fractions\n";
	cout << "3: Multiply two fractions\n";
	cout << "4: Divide two fractions\n";
	cout << "Press \"Q\" or \"q\" to exit\n\n";
}
// This function is used for the operator selection.  Echos users operator choice,  and prevents wrong input.
void getOper(char& menuSel)
{
	do
	{
		cin >> menuSel;
		cout << endl;
		switch (menuSel)
		{
		case '1':
			cout << "Addition!\n" << endl;
			break;
		case '2':
			cout << "Subtraction!\n" << endl;
			break;
		case '3':
			cout << "Multiplication!\n" << endl;
			break;
		case '4':
			cout << "Division!\n" << endl;
			break;
		case 'Q':
			cout << "Ending program\n" << endl;
			break;
		case 'q':
			cout << "Ending program\n" << endl;
			break;
		default:
			cout << "Not an acceptable operator\n" << endl;
		}

	} while (menuSel != '1' && menuSel != '2' && menuSel != '3' && menuSel != '4' && menuSel != 'Q' && menuSel != 'q');

}
