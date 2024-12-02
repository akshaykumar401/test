// Call by referance

#include <iostream>
using namespace std;

// Call by Referance Function Defination..
void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


// driver Code...
int main(){
    int a, b;

    cout<< "Enter the Value of A: ";
    cin>> a;
    cout<< "Entet the Value of B: ";
    cin>> b;
    cout<<"Before Swape A = "<< a << " and B = "<< b << endl;
    swap(&a, &b);
    cout<<"After Swape A = "<< a << " and B = "<< b << endl;

    return 0;
}