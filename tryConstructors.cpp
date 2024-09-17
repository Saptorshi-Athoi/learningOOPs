#include<bits/stdc++.h>
using namespace std;

class Student {
public :
    string name;
    double cgpa;
    double* cgpaPtr; //! an exmple of making deep copy, AT FIRST create a pointer so that u can use it to pont to an empty space in the memory

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
        // cgpaPtr = new double; //!  use it to pont to an empty space in the memory
        // *cgpaPtr = cgpa;
    }

    //! Sending object as a parameter by reference
    // Student(Student &obj){      //! Cutom copy constructor
    //     this->name = obj.name;
    //     // this->cgpaPtr = obj.cgpaPtr;
    //     // * and now we will make changes here to creade a deep copy
    //     cgpaPtr = new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    //     //* now we can indipendently change the values of diffrent objects without one influecing the other
    // }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);
    Student s2 (s1);    

    s1.getInfo();
    s2.getInfo();
    s2.cgpa = 9.2;
    s1.getInfo();
    s2.getInfo();
    return 0;
}

//! A SHALLOW COPY only creates problem when we need to dynamically assign values else if dynamically assigned value of any formed inst used,, we can make use of shallow copy
//! So we make use of the DEEP copy