#include<iostream>;
#include <conio.h>;

using namespace std;
class A{
public:
    int x;

void incX(){

     x = x + 1;

    cout << "X: " << x <<endl;
}
};
class ABC {
public:
    ABC(){

        cout << "Constructor\n";
    }
    ~ABC(){
        cout << "Destructor\n";
    }

};

int main (){
    /*
A obj1;
A obj2;

obj1.x = 100;
obj2.x = 200;
cout <<"X: " <<obj1.x <<endl;
*/
if (true){

    ABC obj;
}
cout << "End of main fnx \n";
getch();

}

/*
        <-----Definition----->
        Static Variables
        Variables declared as static in a function are created & initialised once for the lifetime of the program.// in function

        Static variables in a class are created & initialised once. They are shared by all the objects of the class. // in class


        Static objects


*/
