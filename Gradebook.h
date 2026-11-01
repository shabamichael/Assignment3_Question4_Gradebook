//File 1 gradebook.h (Header File) STARTS HERE
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string>

using namespace std;

namespace AcademicRecords
{
	class Gradebook
	{
	private:
		//This class contains three member variables
		string studentName;
		int score;
		int gradeLevel;

	public:
		// Default constructor
		Gradebook();

		// Overloaded constructor
		Gradebook(string name, int studentScore, int level);

		// Destructor
		~Gradebook();

		// Accessor function
		int get_score() const;

		// Friend Overloaded Operators (friend function)
		friend bool operator>=(const Gradebook& student1, const Gradebook& student2);
		friend istream& operator>>(istream& in, Gradebook& student);
		friend ostream& operator<<(ostream& out, const Gradebook& student);
	};
} // namespace AcademicRecords
#endif
// File 1 gradebook.h (Header File) ENDS HERE
