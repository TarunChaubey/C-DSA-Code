#include<bits/stdc++.h>
using namespace std;

// Run Time Polymoephism
// Funcation overrighting

class A{
    public:
        void display(){
            cout<<"This is Super/Parent Class Funcayion"<<endl;
        }
};

class B:public A{
    public:

        // 
        void display(){
            cout<<"This is Base/Child Class Funcation"<<endl;
        }
};

int main(){

    B obj;

    /* B inherite A and both have same funcation but when we called B is
     called his own funcation(from child class not from Paranr class) rather
      than A funcation
    */
    obj.display();

    A obj2;
    obj2.display();

    return 0;
}