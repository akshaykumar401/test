// Demonstrate Constructor & Distructor.

#include <iostream>
using namespace std;

// Static Data.
static int counter;

// Class.
class MyClass {
    public:
        // Constructor.
        MyClass() {
            counter++;
            cout<<"Constructor is Callred for "<< counter <<endl;
        }

        ~MyClass() {
            cout<<"Distructor is Called for "<< counter <<endl;
            counter--;
        }
};

// Driver Code....
int main(){
    MyClass obj[10];

    return 0;
}