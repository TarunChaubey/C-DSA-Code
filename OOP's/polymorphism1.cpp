#include<bits/stdc++.h>
using namespace std;

// Compile Time Polymoephism
// Funcation Overloading

class Add{
    public:
    int sum(int num1, int num2){
        return num1+num2;
    }

    int sum(int num1, int num2,int num3){
        return num1+num2+num3;
    }
};

int main(){
    Add obj;

    // Funcation Calling As per passing paramters
    cout<<"Output: "<<obj.sum(10,20)<<endl;
    cout<<"Output: "<<obj.sum(10,20,50)<<endl;
    return 0;
}