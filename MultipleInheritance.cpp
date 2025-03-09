#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        int rollno = 0;
};

class Teacher {
    public :
        string subject;
        int salary = 0;

};

class TA : public Student , public Teacher {
    public :
    // TA (string name, int rollno, string subject, int salary){
    //     this->name = name;
    //     this->rollno = rollno;
    //     this->subject = subject;
    //     this->salary = salary;
    // }

    void getInfo(){
        cout << "name : " << name <<endl;
        cout << "Roll no : " << rollno <<endl; 
        cout << "Subject : " << subject <<endl;
        cout << "Salary : " << salary <<endl;
    }
};

int main(){
   // TA stu1("Fardin", 21, "OOPs",65000);
    
   TA stu1;
   stu1.name = "Fardin";
   stu1.getInfo();

}   
    