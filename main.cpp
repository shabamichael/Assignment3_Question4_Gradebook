// File 3 main.cpp STARTS HERE
#include <iostream>
#include <fstream>
#include <string>
#include "gradebook.h"
using namespace std;
using namespace AcademicRecords;
int main()
{
	int benchmarkScore;
	int benchmarkGradeLevel;
	// Prompt the user for the
	//benchmark score and grade level
	cout << "Enter benchmark score: ";
	cin >> benchmarkScore;
	cout << "Enter benchmark grade level: ";
	cin >> benchmarkGradeLevel;
	// Use the overloaded constructor to
	//initialise benchmark_student
	// Name is set to an empty string
	Gradebook benchmark_student("", benchmarkScore, benchmarkGradeLevel);
	// Open the file containing
	// the student records
	ifstream inputFile("Student.txt");
	if (!inputFile)
	{
		cerr << "Error: Could not open Student.txt" << endl;
		return 1;
	}
	// uses default constructor
	Gradebook student;
	cout << "\nStudents who equalled or outperformed the benchmark:\n";
	cout << "-----------------------------------------------------\n";
	cout << "Name\t\t\tScore\t\t\tGrade" << endl;
	cout << "=====================================================\n";
	// Read student records from the file using >>
	while (inputFile >> student)
	{
		// Compare each student with
		// benchmark_student using >=
		if (student >= benchmark_student)
		{
			cout << student << endl;
		}
	}
	inputFile.close();
	return 0;
}
// File 3 main.cpp (Application Program File) ENDS HERE