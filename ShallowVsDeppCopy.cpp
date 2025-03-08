#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string* std;
    double cgpa;

    // Constructor
    Student(string name, string std, double cgpa) {
        this->name = name;
        this->std = new string(std);
        this->cgpa = cgpa;
    }

    // Shallow Copy Constructor
    Student(const Student& other) {
        name = other.name;
        std = other.std; // Shallow copy
        cgpa = other.cgpa;
    }

    // Deep Copy Constructor
    Student deepCopy() const {
        return Student(name, *std, cgpa); // Deep copy
    }
};

int main() {
    Student student1("John", "10th", 3.8);
    Student student2 = student1; // Shallow copy
    Student student3 = student1.deepCopy(); // Deep copy

    // Modify the original object
    *student1.std = "12th";

    // Output the results
    cout << "Student 1: " << student1.name << ", " << *student1.std << ", " << student1.cgpa << endl;
    cout << "Student 2: " << student2.name << ", " << *student2.std << ", " << student2.cgpa << endl;
    cout << "Student 3: " << student3.name << ", " << *student3.std << ", " << student3.cgpa << endl;

    return 0;
}