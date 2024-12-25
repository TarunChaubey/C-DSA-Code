#include<iostream>
using namespace std;

int count=0;
void PrintName5Times(){

    // Base_Condition

    if(count == 5){
        return;
    }
    cout<<"Ballia"<<endl;
    count++;
    PrintName5Times();
    cout<<"Me"<<endl;
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    PrintName5Times();
    // Calling funcation recursively
    PrintName5Times();

    return 0;
}