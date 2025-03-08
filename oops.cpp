#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public: 
    // non-parametrized constructor
    Teacher(){
        dept = "Computer science"; // now for all every obj dept is computer science
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
};

int main(){
    
    Teacher t1;
    t1.name = "Fardin Alam";
    t1.subject = "OOPs";
    t1.setSalary(900000);

    cout<< t1.name <<endl;
    cout<< t1.getSalary() <<endl;
    cout<< t1.dept <<endl;

    return 0;
}