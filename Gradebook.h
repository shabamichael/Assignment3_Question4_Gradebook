#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>
using namespace std;

class Gradebook
{
private:
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

    // Overloaded relational operator (friend function)
    friend bool operator>=(const Gradebook& student1, const Gradebook& student2);

    // Overloaded extraction operator (friend function)
    friend istream& operator>>(istream& in, Gradebook& student);

    // Overloaded insertion operator (friend function)
    friend ostream& operator<<(ostream& out, const Gradebook& student);
};

#endif