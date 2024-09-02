#include<iostream>;
#include <conio.h>;
using namespace std;

    class Teacher{
        // properties
    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;


        //methods// memberFunctions
        void changeDept (string newDept){
            dept = newDept;
        }

        void setSalary (double newSalary){
            salary = newSalary;
        }
        double getSalary (){
            return salary;
        }
    };

int main(){
    Teacher t1;
    t1.name = "Shaykot";
    t1.dept = "Textile";
    t1.changeDept("CSE");
    t1.setSalary(25000);

    cout << t1.name <<endl;
    cout << t1.dept <<endl;
    cout << t1.getSalary();

    getch();
}

/*
            <-----Definition----->

    class & objects

    Object: Objects are entities in the real world
    Class: class is like a blue print of these entities.

    Access Modifiers

    Private: data & methods accessible inside class.
    Public: data & method accessible to everyone.
    Protected: data & method accessible inside class & to its derived class.

*/

