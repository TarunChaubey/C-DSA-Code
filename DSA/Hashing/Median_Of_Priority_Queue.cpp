#include<bits/stdc++.h>
using namespace std;


int main(){
    // Greater Used to print in ascending order with it print in decending order

    priority_queue<int, vector<int>, greater<int>> q;
    q.push(95);q.push(19);q.push(11);q.push(40);q.push(80);q.push(81);q.push(92);q.push(28);q.push(53);

    int median=0;
    if(q.size()%2 == 0){
        median = q.size()/2;
    }
    else{
        median = (q.size()-1)/2;   // We Have to access lower element
        median = (q.size()-1)/2;    // if we want to access higher element
    }
     while(median--){
        if(median == 0){
            cout<<q.top();
            q.pop();
        }
        q.pop();
    }
    return 0;

}