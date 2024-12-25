#include<bits/stdc++.h>
using namespace std;


// Program In which class and function/Method has same name classed construtor


// class name
class Hellow{
    public:
        int n;

    public:
    
    // Constructor
        Hellow(){
            cout<<"I am in Deafult Constructor"<<endl;
        }


    // Destructor
        ~Hellow(){
            cout<<"I am in Deafult Constructor"<<endl;
        }

        void display(){
            cout<<"Hellow World from Member Funcation"<<endl;
        }
};




int main(){

    // Constructor is called
    Hellow obj;

    // Function is called
    obj.display();

    // Automatic Destructor is called
    return 0;
}