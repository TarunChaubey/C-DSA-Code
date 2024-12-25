#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 2579852525;

    // to count frequency
    int count=0;
    // number for which we have to find freq
    // int n;
    // cin>>n;
    int n = 5;
    while (num >0)
    {
        if(n == num%10){
            num = num/10;
            count++;
        }
    }
    cout<<"Frequncency of Number "<<n<<" is "<<count<<endl;
    return 0;
}