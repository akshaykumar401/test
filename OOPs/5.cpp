// Function Diagram Given..

#include <iostream>
using namespace std;

// Table Function..
void table(int num){
    int i;

    for(i=1 ; i<=10 ; i++){
        cout<< num << " * " << i << " = " << i * num << endl;
    }
}

// Factorial Function..
void factorial(int num){
    int i, fact = 1;

    if(num < 1){
        cout << "Factorial of Less Then 1 Values Can Not Be Exist" << endl;
    } else if(num == 1){
        cout<< "Factorail of "<< num << " is "<< fact << endl; 
    } else {
        for(i=1 ; i<=num ; i++){
            fact = fact * i;
        }

        cout<< "Factorail of "<< num << " is "<< fact << endl;
    }
}

// Odd Even Cheaker.
void oddEvenCheaker(int num){
    if(num % 2 == 0){
        factorial(num);
    }else{
        table(num);
    }
}

// Addition Function.
void sum(int valOne, int valTwo){
    int add = valOne + valTwo;

    oddEvenCheaker(add);
}

// Max Function Defination.
int max(int a, int b){
    if(a > b){
        return a;
    }else {
        return b;
    }
}

// Min Function Defination.
int min(int a, int b){
    if(a > b){
        return b;
    }else {
        return a;
    }
}


// Driver Code..
int main(){
    int a, b, c, d, maxVal, minVal;

    cout<< "Enter The First Number: ";
    cin>> a;
    cout<< "Enter The Second Number: ";
    cin>> b;
    cout<< "Enter The Third Number: ";
    cin>> c;
    cout<< "Enter the Fourth Number: ";
    cin>> d;

    maxVal = max(a, b);
    minVal = min(c, c);
    sum(maxVal, minVal);

    return 0;
}