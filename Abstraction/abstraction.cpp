#include <iostream>;
#include <conio.h>;

using namespace std;

class Shape {
    virtual void  draw() = 0; // pure virtual function
};
 class circle: public Shape{
public :
    void draw(){
        cout << "Drawing a circle\n";
    }
 };
int main (){

    Circle c1;
    c1.draw();
     getch();
}

/*
    <-----Abstraction----->

    Abstraction:
    Hiding all unnecessary details & showing only the important parts

    Using Abstract class

    Abstract classes are used to provide a base class from which other class can be derived.

    They cannot be instantiated and are meant to be inherited.

    Abstract classes are typically used to define an interface for derived classes.

*/
