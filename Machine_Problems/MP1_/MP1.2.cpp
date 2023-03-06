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

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <array>

using namespace std;

//constants
const int NUMBER_OF_STUDENTS = 20;

//structure definition
struct studentData
{
	string studentFName;
	string studentLName;
	int testScore;
	char grade;
};

// Function prototypes
char set_student_grade(int);
void read_data_to_struct(ifstream&, studentData[], int);
void print_struct_array(ofstream&, studentData[], int, int);
void sort_scores(studentData[], int);
int higest_score(studentData[], int);



int main()
{
	//Opens file streams
	ifstream inData("data1.txt");
	ofstream outData("mp1Output.txt");

	studentData studentsInClass[20];
	int highestScore;

	
	read_data_to_struct(inData, studentsInClass, NUMBER_OF_STUDENTS);
	highestScore = higest_score(studentsInClass, NUMBER_OF_STUDENTS);
	print_struct_array(outData, studentsInClass, NUMBER_OF_STUDENTS, highestScore);
	
	// Closes file streams
	inData.close();
	outData.close();

	

	



	return 0;
}

// funtion definitions

//This function takes an a file and inputs data into a structure.
void read_data_to_struct(ifstream& inData, studentData studentsInClass[], int numberOfElements)
{

	int currentStudentTestScore;
	char currentStudentGrade;

	for (int i = 0; i < numberOfElements; i++)
	{
		inData >> studentsInClass[i].studentFName;
		inData >> studentsInClass[i].studentLName;
		inData >> studentsInClass[i].testScore;
		currentStudentTestScore = studentsInClass[i].testScore;
		currentStudentGrade = set_student_grade(currentStudentTestScore); // sets students grade based off of test score
		studentsInClass[i].grade = currentStudentGrade;

	}

}

//This function sets the grade of the student
char set_student_grade(int testScore)
{
	if (testScore >= 90)
		return 'A';
	else if (testScore >= 80)
		return 'B';
	else if (testScore >= 70)
		return 'C';
	else if (testScore >= 60)
		return 'D';
	else if (testScore < 60)
		return 'E';		
}


// This function sorts the scores in increasing order
void sort_scores(studentData studentsInClass[], int numOfStudents)
{	
	int index, highestScore, location;
	studentData temp;
	
	for (index = 0; index < numOfStudents - 1; index++) // sorts structure in order of highest test scores using selection sort algorithm
	{
		highestScore = index;

		for (location = index + 1; location < numOfStudents; location++)
			if (studentsInClass[location].testScore > studentsInClass[highestScore].testScore)
				highestScore = location;

		temp = studentsInClass[highestScore];
		studentsInClass[highestScore] = studentsInClass[index];
		studentsInClass[index] = temp;

	}
}

//This function finds the highest test score
int higest_score(studentData studentsInClass[], int numOfStudents)
{
	sort_scores(studentsInClass, numOfStudents);
	return studentsInClass[0].testScore;
}


//This function prints the structure array
void print_struct_array(ofstream& outData, studentData studentsInClass[], int numberOfElements, int highestScore)
{
	 outData << "The highest test score was: " << highestScore << endl << endl; // Prints out the highes test score

	outData << left;
	for (int i = 0; i < numberOfElements; i++) // prints out students from structure array
	{
		outData << studentsInClass[i].studentLName << ", ";
		outData << studentsInClass[i].studentFName << "\t";
		outData << studentsInClass[i].testScore << "\t";
		outData << endl;
		

	}
	
}
	
		