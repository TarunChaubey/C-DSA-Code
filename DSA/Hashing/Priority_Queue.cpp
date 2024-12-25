#include<bits/stdc++.h>
using namespace std;

int main(){
    // Greater Used to print in ascending order with it print in decending order
    // 
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(95);
    q.push(19);
    q.push(11);
    q.push(40);
    q.push(80);
    q.push(81);
    q.push(92);
    q.push(28);
    q.push(53);

    while (!q.empty()){
    cout<<' '<<q.top();  //printing elements of queue
    q.pop();
    }

    return 0;
}