#include<iostream>
using namespace std;


int main(){
    // string  st = "1abc23aa2";
    string st;
    cin>>st;
    // Store size of string 
    // int n=(int)st.length()
    int n=st.length();
    int sum = 0;
    int num=0;
    for(int i=0; i<n; i++){
        // Filtering Numberical Value
        if(st[i] > '0'  && st[i] < '9'){
            // Convert String to number it help in 2 or more 2 digit number
            num = num*10 + (st[i]-'0');
        }
        else{
            sum +=num;
            num = 0;
        }
    }
    cout<<sum+num;
    return 0;
}