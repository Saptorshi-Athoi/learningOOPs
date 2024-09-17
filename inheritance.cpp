 #include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Person(){
        cout << "Person" << endl;
    }
    ~Person(){
        cout << "Destruct Person" << endl;
    }
};

class Student : public Person {
public:
    int rollno;
    Student(string name, int age, int rollno) :Person(name, age) {      //! this will make us initialise the variables of rthe parent class at the same time when we create an object for the child class
        this->rollno = rollno;
    }
    void getInfo() {
        cout << "name :" <<name << endl;
        cout << "age : "<< age << endl;
        cout << "rollno : "<< rollno << endl;
    }

    // Student() {
    //     cout << "Student" << endl;
    // }
    ~Student() {
        cout << "Destruct Student" << endl;
    }
};
int main() {
    Student s1("Rahul", 21, 1234);
    s1.name = "rahul kumar";
    s1.age = 21;
    s1. rollno = 1234;
    s1.getInfo();
    return 0;
}

//! follow the sequence in which constructors and destructors are called