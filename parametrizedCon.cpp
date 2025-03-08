#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public: 
    // parametrized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // properties / attributes
    string name;
    string dept;
    string subject;
        

    // methods / memeber function
    void changeDept(string newDept){
    dept = newDept;
    }
    // seter : setting private values
    void setSalary (double s){
        salary = s;
    }
    // geter : returning private values
    double getSalary(){
        return salary;
    }

    void getInfo (){
        cout << "name : " << name <<endl;
        cout << "subject : " << subject <<endl;   
        cout << "salary : " << salary<<endl;        

    }
};

int main(){
    
    Teacher t1("fardin","computer science","oops",40000);

    t1.getInfo();

    return 0;
}