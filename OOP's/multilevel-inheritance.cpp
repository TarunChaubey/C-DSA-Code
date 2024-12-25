#include<bits/stdc++.h>
using namespace std;


// C inherits B and B inherits A

class A{
    public:
        A(){
            cout<<"Constructor of A"<<endl;
        }

};


class B: public A{
    public:
        B(){
            cout<<"Constructor of B"<<endl;
        }

};

class C:public B{
    public:
        C(){
            cout<<"Constructor of C"<<endl;
        }

};


int main(){

    // By Calling Only Class C get access of A and B Class
    C obj;
    return 0;
}