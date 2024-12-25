#include<bits/stdc++.h>
using namespace std;


// Program In which class and function/Method has same name classed construtor


// class name
class Add{
    public:
    
    // Method/Funcation Name
        Add(int num1, int num2){
            cout<<"Sum of Both Numbers are "<<num1+num2<<endl;
        }
};




int main(){

    Add Addition(10,15);

    return 0;
}