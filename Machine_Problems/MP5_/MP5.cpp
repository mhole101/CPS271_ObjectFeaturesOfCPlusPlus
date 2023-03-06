// MP5
// By: Matt Hole

#include<iostream>
#include<string>

#include "MyDate.h"
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Staff.h"
#include "Faculty.h"

using namespace std;



int main()
{
	
	Student s;
	cout << "Student object s:\n";
	s.Print();
	cout << "\nInput data for student s \n";
	s.Input();
	Student t;
	t = s;
	cout << "Overloaded = operator transfers data from student s to student t: \n";
	t.Print();
	Student u(t);
	cout << "\nCopy constructor copies data from student t to student u : \n";
	u.Print();
		
	Staff es;
	cout << "\nStaff es object:\n";
	es.Print();
	cout << "\nInput staff es data: \n";
	es.Input();
	Staff et;
	et = es;
	cout << "\nData from staff es object is transferred to staff et object using the = operator:\n";
	et.Print();
	Staff eu(et);
	cout << "\nData from staff et object is transferred to staff eu object using the copy constructor:\n";
	eu.Print();

	Faculty f;
	cout << "\nFaculty object f:\n";
	f.Print();
	cout << "\nInput data for Faculty f:\n";
	f.Input();
	Faculty g;
	g = f;
	cout << "\nData from faculty object f is transferred to faculty object g using the = operator: \n";
	g.Print();
	Faculty h(g);
	cout << "\nData from faculty object g is transferred to faculty object h using the copy constructor\n";
	g.Print();



	return 0;
}