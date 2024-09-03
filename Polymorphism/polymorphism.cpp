#include <iostream>;
#include <conio.h>;

using namespace std;

class Student {
    public:
    string name;
    Student(){
        cout <<"This is Non-parametrised\n";
    }
    Student(string name){
        this-> name = name;
        cout <<"This is Parametrised\n";
    }
};

int main (){

    Student s1;
    Student s2("Shaykot");

    getch();
}
/*
    <-----Definition----->

    Polymorphism:

    Polymorphism is the ability to objects to take on different forms of behave in different ways depending on the context in which they are used.

    Compile Time Polymorphism
    Run Time polymorphism



*/
