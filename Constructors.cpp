 #include<bits/stdc++.h>
using namespace std;

class Teacher{
private:    // ^ BY default stuffs inside a class are private
    int salary;

public:
    string name;
    string subject;
    string dept;
    Teacher(){
        dept = "CSE";
    }

    Teacher(string name, string subject, string dept){
        this->name = name;
        this->subject = subject;
        this->dept = dept;
    }

    //! MAKING a copy constructor-------- IF this one exists then default copy constructor is not called
    Teacher (Teacher &orgObj) {
        cout << "I am a custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void setSalary(int sal){
        salary = sal;
    }
    int getSalary(){
        return salary;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        // cout << "Salary: " << salary << endl;
    }

};

int main() {
    Teacher t1("Shradha","C++","Computer Science");
    t1.getInfo();

    Teacher t2(t1);     // ! Using default copy constructor
    t2.getInfo();

    return 0;
}


