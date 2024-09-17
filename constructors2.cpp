#include<bits/stdc++.h>
using namespace std;

class Student {
public :
    string name;
    double* cgpaPtr; //! an exmple of making deep copy, AT FIRST create a pointer so that u can use it to

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //! Sending object as a parameter by reference
    Student(Student &obj){      //! Cutom copy constructor
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
};