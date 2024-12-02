// return type with no Argument, no Return Type and no Argument.

#include <iostream>
using namespace std;

// return type with now Argument.
int add(){
    int a, b;

    cout<< "Enter the Value of A: ";
    cin>> a;
    cout<< "Enter the Value of B: ";
    cin>> b;

    return a + b;
}

// no return Type and no Argument.
void sum(){
    int a, b;

    cout<< "Enter the Value of A: ";
    cin>> a;
    cout<< "Enter The Value of B: ";
    cin>> b;
    cout<<"Sum of " << a << " + " << b << " = "<< a + b << endl ;
}

// driver Code..
int main(){
    // int result = add();
    // cout<< "Sum "<< result << endl;

    sum();

    return 0;
}