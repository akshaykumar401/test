// Static Data Member.

#include <iostream>
using namespace std;

// Class..
class Car{
    static int carId;
    string carName;

    public:
        static int publicCounter;

        void input(){
            cout<<"Enter car name: ";
            cin>>carName;
            carId++;
            publicCounter++;

        }

        void display(){
            cout<<"Car Name: "<<carName<<endl;
            cout<<"Car ID: "<<carId<<endl;
            cout<<"Total Car Out: "<<publicCounter<<endl;
        }

        static void currCarId(){
            cout<< "Current Car ID = " << carId << endl;
        }

};

int Car::carId = 100;
int Car :: publicCounter;

// Driver Code....
int main(){
    Car x, y, z;

    x.input();
    y.input();
    z.input();
    x.display();
    y.display();
    z.display();
    cout<<"Print the Current Car ID: "<<endl;
    Car::currCarId();

    return 0;
}