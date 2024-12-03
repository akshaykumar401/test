// Inharitance..

#include <iostream>
using namespace std;

// Base Class..
class Base {
    int a = 10, b = 20;

    public:
        int getA(){
            return a;
        }

        int getB(){
            return b;
        }
};

// Derived Class..
class Derived : private Base {
    public:
        void display(){
            cout<< "Addition is: " << getA() + getB() << endl;
        }
};

// Driver Code....
int main(){
    Derived ob;
    ob.display();

    return 0;
}