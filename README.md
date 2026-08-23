6. Question 4 [30]
Use separate compilation to define a class called Gradebook that represents a student’s academic performance record. This class contains three member variables:
•
studentName, a string that holds the name of the student
•
score, an integer variable that holds the student’s final mark
•
gradeLevel, an integer that represents the academic level/year achieved (e.g., level completed or grade passed)
Required Member Functions:
The class should contain the following member functions:
•
A default constructor that initializes:
o
studentName to an empty string
8
o
score and gradeLevel to 0
•
An overloaded constructor that accepts a student’s details and sets:
o
studentName, score, and gradeLevel to specified values
•
A destructor that does not perform any action
•
An accessor function get_score() to return the value stored in a student's score
•
An overloaded operator >= to compare one student’s performance with another, to determine if one student has performed as well as or better than another
This operator is implemented as a friend function with the following prototype:
bool operator>=(const Gradebook & student1, const Gradebook & student2);
This function returns:
•
true if student1 has at least the same score and grade level as student2
•
false otherwise
•
An overloaded extraction operator (>>) implemented as a friend function
o
Used to input student records from a file
•
An overloaded insertion operator (<<) implemented as a friend function
o
Displays a student’s name, score, and grade level
Application Requirements:
6.1.
Create the header file gradebook.h that contains the Gradebook class specification.
6.2.
Create the implementation file for the Gradebook class, including all member functions and friend functions.
6.3.
Demonstrate the class in an application program (main()) that:
•
Lists all students who have equalled or outperformed a benchmark student
•
Prompt the user to enter:
o
Score
o
Grade level
•
Use the overloaded constructor to initialise a Gradebook object called benchmark_student
o
Set the name to an empty string
•
Student records are stored in a file called Students.txt
•
Use a while loop to:
o
Read student records from the file using >>
COS1512/103/0/2026
9
o
Compare each student with benchmark_student using the overloaded >= operator
o
Display all students who meet or exceed the benchmark
6.4.
Why is no code required for the destructor?
6.5.
Why are the operators >=, >> and << implemented as friend functions?
Sample of Student.txt data
Alice 75 2
Sizwe 60 1
Charlie 85 3
David 75 2
Eve 90 3
Thandi 50 1
Grace 80 2
Mpilo 85 3
Diana 45 1
Lesedi 90 3