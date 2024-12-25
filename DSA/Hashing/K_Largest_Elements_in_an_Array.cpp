#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>> q;
    q.push(95);
    q.push(19);
    q.push(11);
    q.push(40);
    q.push(80);
    q.push(81);
    q.push(92);
    q.push(28);
    q.push(53);

    // Print K Larget Element;
    int k;
    cin>>k;

    while(k--){
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}