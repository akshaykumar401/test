// Friend and inline Function.

#include <iostream>
using namespace std;

// class
class Cuboid{
    int l, b, h;
    // Friend Function Declaration.
    friend int volume(Cuboid);

    public:
        Cuboid(int l, int b, int h){
            this->l = l;
            this->b = b;
            this->h = h;
        }

        // Inline Function Declaration.
        int area();
};

// Friend Function Definition.
int volume(Cuboid c){
    return (2 * ((c.l * c.b) + (c.b * c.h) + (c.l * c.h)));
}

// Inline Function Defination.
inline int Cuboid::area(){
    return (l * b * h);
}

// Driver Code....
int main(){
    Cuboid c(5, 6, 7);

    cout<< "Area = " << c.area() << endl;
    cout<< "Volume = " << volume(c) << endl;

    return 0;
}