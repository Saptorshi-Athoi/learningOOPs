#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:    // ^ BY default stuffs inside a class are private
    int salary;

public:
    string name;
    string subject;
    string dept;

    //! setter
    void setSalary(int sal){
        salary = sal;
    }
    //! getter
    int getSalary(){
        return salary;
    }
    // private:

};

int main() {
    Teacher t1;
    t1.name = "Shradha";
    t1. subject = "C++";
    t1.dept = "Computer Science";

    //! and thats how we asscess protected members
    t1. setSalary (25000);
    cout << t1. getSalary ()<< endl;

    cout << t1.name << endl;
    return 0;
}

//*  ACCESS MODIFIERS
// !Public can be accessed by anyone anywhere
// !PRIVATE exclusive only inside class
// !PROTECTED when private members are intended to be shared to incerited child classes

