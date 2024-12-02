// Type of constructor.

#include <iostream>
using namespace std;

// Class....
class Cuboid{
    int l, b, h;

    public:
        Cuboid(){  // Default Constructor.
            cout<<"Enter The Length of the Cuboid: ";
            cin>> l;
            cout<<"Enter The Bredth of the Cuboid: ";
            cin>> b;
            cout<<"Enter The Height of the Cuboid: ";
            cin>> h;
        }

        Cuboid(int l, int b, int h = 5){   // Parametrised Constructor.
            this->l = l;
            this->b = b;
            this->h = h;
        }

        Cuboid(Cuboid &ob){   // Copy Constructor.
            this->l = ob.l;
            this->b = ob.b;
            this->h = ob.h;
        }

        int TSA(){
            return (2*((l*b) + (b*h) + (l*h)));
        }

        int volume(){
            return (l * b * h);
        }

        void display(){
            cout<<"Volume of Cuboid = " << volume() << endl;
            cout<< "Total Surface Area = " << TSA() << endl;
        }

};

// Driver Code....
int main(){
    Cuboid O1, O2(5, 6, 7), O3(O2);

    O1.display();
    O2.display();
    O3.display();

    return 0;
}