// Create array as an object

#include <iostream>
using namespace std;

// Class....
class Marks{
    string name;
    int roll_no, subjectMarks[5], totalMarks = 0;

    public:
        void input(){
            cout<<"Enter The Name of Student: ";
            cin>> name;
            cout<<"Roll Number: ";
            cin>> roll_no;
            cout<<"Enter The Subject Marks\n";
            for(int i=0 ; i<5 ; i++){
                cin>>subjectMarks[i];
            }
        }

        void display(){
            cout<< "Name: " << name << endl;
            cout<< "Roll Number: " << roll_no << endl;
            
            for(int i=0 ; i<5 ; i++){
                totalMarks = totalMarks + subjectMarks[i];
            }
            cout<< "Total Marks Occupies: " << totalMarks << endl;
        }
};

// Driver Code...
int main(){
    Marks obj[2];

    for(int i=0 ; i<2 ; i++){
        obj[i].input();
    }

    for(int i=0 ; i<2 ; i++){
        obj[i].display();
    }

    return 0;
}