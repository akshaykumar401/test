// Making Calculator with All Private Data Member..

#include <iostream>
using namespace std;

// Class...
class Cal{
    int a, b;
    int add();
    int sub();
    int mul();
    double div();

    public:
        void init(int a, int b);
        void getAllFunction();
};

int Cal :: add(){
    return a + b;
}

int Cal :: sub(){
    return a - b;
}

int Cal :: mul(){
    return a * b;
}

double Cal :: div(){
    return (double)a / b;
}

void Cal :: init(int a, int b){
    this->a = a;
    this->b = b;

    getAllFunction();
}

void Cal :: getAllFunction(){
    char ch;

    cout<<"Choice Any Operation {+, -, /, *}: ";
    cin>> ch;

    switch(ch){
        case '+':
            cout<<"Addition = " << add() << endl;
            break;

        case '-':
            cout<<"Subtraction = " << sub() << endl;
            break;

        case '/':
            cout<<"Division = " << div() << endl;
            break;
        
        case '*':
            cout<<"Multiplication = " << mul() << endl;
            break;

        default:
            cout<<"ERROR!!\n Invalide Choice" << endl;
    }
}

// Driver Code...
int main(){
    Cal obj;
    obj.init(10, 20);

    return 0;
}