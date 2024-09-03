#include <iostream>;
#include <conio.h>;

using namespace std;

class Print {
public :
    void show (int x ) {
        cout << "Int \t : " << x <<endl;
    }
    void show (string x){
        cout << "String \t : " <<x <<endl;
    }
    void show(double x) {
        cout << "Dobule \t : " <<x <<endl;
    }

    void show (char x ){
        cout << "Chaacter \t: " <<x <<endl;
    }

};
// function overriding
class Parent {
public:
    void getInfo (){
        cout << "Parent Class\n";
    };
};
class Child: public Parent {
public:
    void getInfo(){
        cout <<"Child Class\n";
    };
};
int main (){
   // Print p1;
   // p1.show(2.55);
    Child c1;
    c1.getInfo();
    getch();
    }
