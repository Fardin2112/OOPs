#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // Destructor
        ~Student(){
            delete cgpaPtr; // Free the memory bec we dont memeory will be leaked
        }

        void getInfo(){
            cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
        }    
};    

int main(){
    Student student1("John", 3.8);
    student1.getInfo();
    return 0;
}