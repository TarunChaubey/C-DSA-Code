#include<bits/stdc++.h>
using namespace std;



void Print_Char_From_Num(int start, int end){
    for(int i=start; i<=end;i++){
        cout<<char(i)<<"-"<<i<<" ";
    }
}

int main(){
    // int a=97;
    // int z=122;
    cout<<"Printing For Capital Latters"<<endl;
    // For Capital Latters
    Print_Char_From_Num(65,90);
    cout<<endl;

    // For Small Latters
    cout<<"Printing For Samll Latters"<<endl;
    Print_Char_From_Num(97,122);
    return 0;
}