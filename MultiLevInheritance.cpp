#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person {
    public :
        int rollno;

};

class GradStudent : public Student {
    public :
    string researchArea;

    GradStudent (string name, int age, int rollno){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "name : " << name <<endl;
        cout << "age : " << age <<endl; 
        cout << "roll no : " << rollno <<endl; 
    }
};

int main(){
    GradStudent stu1("Fardin", 21, 65);
    stu1.getInfo();
}