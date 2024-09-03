#include <iostream>
#include <conio.h>

using namespace std;

// Shallow copy constructor
class Teacher {
public:
    string name;
    string subject;
    string department;
    double salary;

    // Parametrized Constructor
    Teacher(string name, string subject, string department, double salary) {
        this->name = name;
        this->subject = subject;
        this->department = department;
        this->salary = salary;
    }

    // Copy constructor (shallow copy)
    Teacher(const Teacher &orgObj) {
        cout << "This is a custom Copy Constructor" << endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->department = orgObj.department;
        this->salary = orgObj.salary;
    }

    void getInfo() {
        cout << "Name\t: " << name << endl;
        cout << "Subj\t: " << subject << endl;
        cout << "Dept\t: " << department << endl;
        cout << "Salary\t: " << salary << endl;
    }
};

// Deep copy constructor
class Student {
public:
    string name;
    double* cgpaPtr;

    // Parametrized Constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Copy constructor (deep copy)
    Student(const Student &obj) {
        name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr; // Deep copy
    }

    // Destructor to prevent memory leaks
    ~Student() {
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "Name\t: " << name << endl;
        cout << "CGPA\t: " << *cgpaPtr << endl; // Dereferencing the pointer to get the value
    }
};

int main() {
    Teacher t1("Shaykot Hossain Selim", "C++", "Computer Science & Engineering", 25000);
    Teacher t2(t1); // Custom copy constructor invoked
    t2.getInfo();

    Student s1("Shaykot Hossani", 8.9);
    Student s2(s1); // Deep copy constructor invoked

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "Selim";
    s2.getInfo();

    getch();
    return 0;
}
