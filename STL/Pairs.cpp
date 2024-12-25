#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Part 1

    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // Part 2
    pair<int, pair<int,int>> pw = {9,{5,3}};
    cout<<pw.first<<endl;
    cout<<pw.second.first<<" "<<pw.second.second<<endl;

    // Part 3
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].first<<" "<<arr[1].second<<endl; // at 1st index {2,5} and the first is 2 and second is 5
    cout<<arr[2].first<<" "<<arr[2].second<<endl; // at 2nd index {5,1} and the first is 5 and second is 1
    return 0;
}