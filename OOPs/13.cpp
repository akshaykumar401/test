// Operator Overloading

#include <iostream>
using namespace std;

// Class..
class Comp{
    int real, imag;

    public:
        Comp(){
            real = 0;
            imag = 0;
        }

        Comp(int real, int imag){
            this->real = real;
            this->imag = imag;
        }

        void display(){
            if(imag > 0){
                cout<< "Addition is: " << real << " + i"<< imag << endl;
            }else {
                cout << "Addition is: " << real<< " - i" << -imag << endl;
            }
        }

        Comp operator + (Comp c){
            Comp temp;

            temp.real = this->real + c.real;
            temp.imag = this->imag + c.imag;

            return temp;
        }
};

// Driver Code....
int main(){
    Comp A(4, 5), B(6, -7), C;

    C = A + B;
    C.display();

    return 0;
}