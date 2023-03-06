#include <iostream>

using namespace std;

#include "Fraction.h"

// Function Prototypes
void showMenus();
void getOper(char&);


int main()
{
	Fraction f1, f2, f3;
	char mathOper;
	bool booleanSolution;

	cout << "This program will perform math functions on fractions\n"; // Informs user of programs intent.

	do // loop to keep program running until user decides to stop
	{
		showMenus(); // displays choices users can make
		getOper(mathOper); // takes users input and saves it in a variable for operation selection


		switch (mathOper) // math operator selection
		{
		case '1': // addition
			cin >> f1;
			cin >> f2;
			f3 = f1 + f2;
			cout << f3 << endl <<endl;
			break;
		case '2': // subtraction
			cin >> f1;
			cin >> f2;
			f3 = f1 - f2;
			cout << f3 << endl << endl;
			break;
		case '3': // multiplication
			cin >> f1;
			cin >> f2;
			f3 = f1 * f2;
			cout << f3 << endl << endl;
			break;
		case '4': // division
			cin >> f1;
			cin >> f2;
			f3 = f1 / f2;
			cout << f3 << endl << endl;
			break;
		case '5': // <
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 < f2;
			cout << booleanSolution << endl << endl;
			break;
		case '6': // >
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 > f2;
			cout << booleanSolution << endl << endl;
			break;
		case '7': // <=
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 <= f2;
			cout << booleanSolution << endl << endl;
			break;
		case '8': // >=
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 >= f2;
			cout << booleanSolution << endl << endl;
			break;
		case '9': // ==
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 == f2;
			cout << booleanSolution << endl << endl;
			break;
		case '10': // i=
			cin >> f1;
			cin >> f2;
			booleanSolution = f1 / f2;
			cout << booleanSolution << endl << endl;
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
	cout << "5: Fraction 1 < Fraction 2\n";
	cout << "6: Fraction 1 > Fraction 2\n";
	cout << "7: Fraction 1 <= Fraction 2\n";
	cout << "8: Fraction 1 >= Fraction 2\n";
	cout << "9: Fraction 1 == Fraction 2\n";
	cout << "10: Fraction 1 != Fraction 2\n";
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
		case '5':
			cout << "F1<F2\n" << endl;
			break;
		case '6':
			cout << "F1>F2\n" << endl;
			break;
		case '7':
			cout << "F1<=F2\n" << endl;
			break;
		case '8':
			cout << "F1>=F2\n" << endl;
			break;
		case '9':
			cout << "F1==F2\n" << endl;
			break;
		case '10':
			cout << "F1!=F2\n" << endl;
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

	} while (menuSel != '1' && menuSel != '2' && menuSel != '3' && menuSel != '4' && 
		     menuSel != '5' && menuSel != '6' && menuSel != '7' && menuSel != '8' &&
		     menuSel != '9' && menuSel != '10' && menuSel!= 'Q' && menuSel != 'q');

}

 