#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public: 
    // properties / attributes
    string name;
    string dept;
    string subject;
    // parametrized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // copy constructor
    Teacher(Teacher &OrgObj){
        cout<<"I am copy constructor" <<endl;
        this->name = OrgObj.name;
        this->dept = OrgObj.dept;
        this->subject = OrgObj.subject;
        this->salary = OrgObj.salary;
    }
        

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
    // t1.getInfo();

    Teacher t2(t1); // custom copy constructor invoked (default if we dont make custom copy of constructor)
    t2.getInfo();
    
    return 0;
}