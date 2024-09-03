#include <iostream>;
#include <conio.h>;

using namespace std;
// Parent Class Here...........
class Parent{

public:
    string name;
    string age;

    Parent(string name, string age){
        this->name = name;
        this->age = age;
    }
    void getInfo (){
        cout << "Name \t : " <<name <<endl;
        cout << "Age  \t: " <<age <<endl;
    }
};
// Child Class here............
class Child : public Parent {
public:

    int salary;

    Child(string name, string age, int salary):Parent(name, age){
        this->salary = salary;
    };
    void getInfo(){
     //   cout << "Name\t : " <<name <<endl;
     //   cout <<"Age\t : " <<age <<endl;
       Parent::getInfo();
        cout <<"Salary\t : " <<salary <<endl;
    }
};
// Grand Class Here.............
class GrandSon: public Child{
    public:
    string subject;
    GrandSon(string name, string age, int salary , string subject):Child(name, age, salary){
    //  this->name= name;
    //  this->age = age;
    //  this->salary=salary;
        this->subject = subject;
    }
    void getInfo(){

  //      cout << "Name\t : " <<name <<endl;
  //      cout << "Age\t : " <<age<<endl;
  //      cout <<"Salary\t : " <<salary<<endl;
   Child::getInfo();
        cout <<"Subjct\t : " <<subject<<endl;
    }
};
int main(){
    GrandSon g1("Shaykot", "24", 25000, "C++");
    g1.getInfo();
    getch();
}
