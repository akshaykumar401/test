// Basic Calculator Using Calss and Object.

#include <iostream>
using namespace std;

// Class...
class Calculator{
    int a, b;

    public:
        int add();
        int subtract();
        double division();
        int multiplication();
        void input();
};

void Calculator :: input(){
    cout<<"Enter Two Number: ";
    cin>> a >> b;
}

int Calculator :: add(){
    return (a + b);
}

int Calculator :: subtract(){
    return (a - b);
}

int Calculator :: multiplication(){
    return (a * b);
}

double Calculator :: division(){
    return ((double)a / b);
}

// Driver code...
int main(){
    Calculator obj;
    char ch;

    obj.input();
    cout<<"Choice Any Operation: {+, -, /, *}: ";
    cin>> ch;

    switch(ch){
        case '+':
            cout<<"Addition = " << obj.add() << endl;
            break;

        case '-':
            cout<<"Subtraction = " << obj.subtract() << endl;
            break;

        case '/':
            cout<<"Division = " << obj.division() << endl;
            break;
        
        case '*':
            cout<<"Multiplication = " << obj.multiplication() << endl;
            break;

        default:
            cout<<"ERROR!!\n Invalide Choice" << endl;
    }

    return 0;
}