#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        virtual void print(){
            cout<<"I am from base class"<<endl;
        }

        void show(){
            cout<<"I am from base class"<<endl;
        }
};

class derived : public base{
    public:
        void print(){
            cout<<"I am from derived class"<<endl;
        }

        void show(){
            cout<<"I am from derived class"<<endl;
        }
};

int main(){
    base* bptr;
    derived d;
    bptr=&d;

    bptr->print();
    bptr->show();
    return 0;
}