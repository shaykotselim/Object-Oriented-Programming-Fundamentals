#include<iostream>;
#include <conio.h>;
using namespace std;

    class Teacher{
        // properties
    private:
        double salary;

    public:

        string name;
        string subject;
        string dept;
        //methods// memberFunctions


       void changeDept (string newDept){
            dept = newDept;
       }


        // setter function

        void setSalary (double newSalary){
            salary = newSalary;
        }

        //getter function

        double getSalary (){
            return salary;
        }

    };
    // Access Modifiers
    class Account{
    private:  // using for data hiding
        double balance;
        string password;
    public:
        string accountID;
        string userName;
    };

int main(){
   // Teacher t1("Shaykot", "C++", "CSE", 25000); // constructor call

    Teacher t1;


      t1.name = "Shaykot";
      t1.subject = "C++";
      t1.changeDept("CSE");
      t1.setSalary(25000);

      cout <<"Name:\t" << t1.name <<endl;
      cout <<"Subj:\t" << t1.subject <<endl;
      cout <<"Dept:\t"<< t1.dept <<endl;
      cout <<"Salary:\t" << t1.getSalary();

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

    Encapsulation:
    Encapsulation is wrapping up of data & member function in a single unit called class.


*/

