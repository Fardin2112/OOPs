#include<iostream>
#include<string>
using namespace std;

class Person {
    public :
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    // // Note : first Parent constructor run then child constructor run
    // Person () {
    //     cout << "parent constructor" << endl;   
    // }
    // Note : first child destructor run then parent destructor run
    ~Person(){
        cout << "parent destructor" << endl;
    }
};

class Student : public Person {
    public :
    int rollno;

    Student(string name, int age, int rollno): Person( name, age){
       // cout << "child constructor" << endl;
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "name : " << name <<" Age : " << age <<" Roll no : "<<rollno<<endl;
    }
    ~Student(){
        cout << "child destructor" << endl;
    }
};

int main(){

    Student s1("fardin",30, 101);
    //s1.name = "Fardin";
    s1.getInfo();
}