#include <iostream>;
#include <conio.h>;

using namespace std;
class Teacher {

public:
    string name;
    string subject;
    string department;
    double salary;

    Teacher (string name, string subject, string department, double salary){
        this -> name = name;
        this -> subject = subject;
        this -> department = department;
        this -> salary = salary;
    }
   void getInfo(){
        cout<<"Name\t:" << name <<endl;
        cout<<"Subj\t:" << subject<<endl;
        cout<<"Dept\t:" <<department<<endl;
        cout<<"Salary\t:" << salary <<endl;
   }

};
int main (){
    Teacher t1("Shaykot Hossain sleim", "C++", "Computer Science & Engineering", 25000);
    //t1.getInfo();
    Teacher t2(t1); // default copy constructor -invoke
    t2.getInfo();
    getch();
}
