// Student Implementation file
// By: Matt Hole

#include<iostream>
#include<iomanip>

#include "Student.h"

using namespace std; 

Student::Student():Person()
{
	GPA = 0.0;
	sGradeStat = NONE;
}

Student::Student(const Student& s) : Person(s)
{
	*this = s;
}

Student &Student::operator=(const Student& s)
{
	Person::operator=(s);
	GPA = s.GPA;
	sGradeStat = s.sGradeStat;
	return *this;
}

Student::~Student()
{

}

void Student::Input()
{
	int gradeInt;
	Person::Input();
	cout << "Please input student GPA: ";
	cin >> GPA;
	cout << "Please enter number correlating students grade status\n"
		<< "0: None\n" << "1: Freshman\n" << "2: Sophomore\n" << "3: Junior\n" << "4: Senior\n";
	cin >> gradeInt;
	cout << endl;
	switch (gradeInt)
	{
	case 0:
		sGradeStat = NONE;
		break;
	case 1:
		sGradeStat = FRESHMAN;
		break;
	case 2:
		sGradeStat = SOPHOMORE;
		break;
	case 3:
		sGradeStat = JUNIOR;
		break;
	case 4:
		sGradeStat = SENIOR;
		break;
	}
		


}

void Student::Print()
{
	Person::Print();
	cout << setprecision(3) << showpoint << "\nGPA: " << GPA
		<< "\nGrade Status: " << gradeStatStr[sGradeStat] << endl;
}

