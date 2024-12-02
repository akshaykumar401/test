// Call By Value.

#include <iostream>
using namespace std;

// Call by Value Function
int fact(int num){
    int i, target = 1;

    if(num < 1){
        target = -1;
    } else if(num == 1){
        target = 1;
    } else {
        for(i=1 ; i<= num ; i++){
            target = target * i;
        }
    }

    return target;
}

// driver Code...
int main(){
    int num, result;

    cout<< "Enter The Number You Want to Find Factorial: ";
    cin>> num;
    result = fact(num);
    if(result < 1){
        cout<< "Value of Less Then 1 Can Not Be Find!!";
    }else {
        cout<< "Factorial of "<< num << " is " << result;
    }

    return 0;
}