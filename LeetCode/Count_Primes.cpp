#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    int j=2;
    while(j<n/2){
        if(n%j==0){
            return false;
            break;
        }
        j++;
    }  
}

// void CountPrime(int num){

//     int res;
//     if(num<=2){
//         res=1;
//     }

//     // Create a vector to store value till num
//     vector<int> vect(num,1);

//     for(int i=2;i<= num; i++){

//         int j=2;
//         while(i<j){

//         }
//         if(i%==0)
//     }


//     for(auto a:vect){
//         cout<<a<<" ";
//     }
//     cout<<endl;
// }

int main(){
    // freopen("inp.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t,n,res;
    cin>>t;
    while(t--){
        cin>>n;
        // res = CountP1rime(n);
        bool ans=IsPrime(n);
        cout<<ans<<endl;
    }
    return 0;
}