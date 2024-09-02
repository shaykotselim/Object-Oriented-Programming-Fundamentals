#include <iostream>;
#include <conio.h>;

using namespace std;

class Teacher {
    public:
        // Non parametrised Constructor;
        /*
             Teacher(){
            cout << "Dept:\t" << "Department of Computer Science & engineering \n";
            }

        */
        // Parametrised Constructor;
        Teacher(string n , string sub, double sal){
            name = n;
            subject = sub;
            salary = sal;
        }

        string name;
        string subject;
        double salary;
    //
        void getInfo (){
            cout << "Name\t:" << name <<endl;
            cout << "Subj\t:" <<subject <<endl;
            cout << "Salary\t:" <<salary<<endl;
        }

};
int main (){
   /*
     Teacher t1;
    t1.name = "Shaykot Hossain Selim";
    t1.subject = "C++";
    cout << "Name:\t" << t1.name <<endl;
    cout << "Subj:\t" << t1.subject<< endl;
   */

    Teacher t1("Shaykot Hossain Selim", "C++" , 25000);
    t1.getInfo();


    getch();
}
/*
    <-----Definition----->

     Constructor:

    Special method invoked automatically at time of object creation. Used for Initialisation.

    Same name as class.
    Constructor does not have a return  type.
    Only called once (automatically), at object creation.
    Memory allocation happens when constructor is called.

    There are three types of constructors
    Non parametrised Constructor
    Parametrised Constructor
    Copy Constructor


*/
