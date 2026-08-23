// File 2: gradebook.cpp STARTS HERE
#include "gradebook.h"
#include <iostream>
#include <string>
using namespace std;
namespace AcademicRecords {
	// Default constructor that
	//initializes members to default values
	Gradebook::Gradebook()
	{
		studentName = "";
		score = 0;
		gradeLevel = 0;
	}
	// Overloaded constructor that
	//accepts a student’s details and sets
	Gradebook::Gradebook(string name, int score, int level)
	{
		this->studentName = name;
		this->score = score;
		this->gradeLevel = level;
	}
	// Destructor
	Gradebook::~Gradebook()
	{
	}
	// Accessor function
	int Gradebook::get_score() const
	{
		return score;
	}
	// Overloaded >= operator (friend function)
	bool operator>=(const Gradebook& student1, const Gradebook& student2)
	{
		return
			student1.score >= student2.score &&
			student1.gradeLevel >= student2.gradeLevel;
	}
	// Overloaded extraction operator (friend function)
	istream& operator>>(istream& in, Gradebook& student)
	{
		in >> student.studentName
			>> student.score
			>> student.gradeLevel;
		return in;
	}
	// Overloaded insertion operator (friend function)
	ostream& operator<<(ostream& out, const Gradebook& student)
	{
		out << student.studentName
			<< "\t\t\t" << student.score
			<< "\t\t\t" << student.gradeLevel;
		return out;
	}
}// namespace AcademicRecords
// File 2 gradebook.cpp ENDS HERE
