#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->

void RearrangePosNeg(int a[], int size){
    unordered_map<int,int> mp;

    while (size--)
    {
        mp.insert(a[size]);
    }
    map<int, int>::iterator itr;

    for(itr = mp.begin(); itr != mp.end(); ++itr){
        cout<<itr.first;
        }
}

int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    RearrangePosNeg(arr, n);
 
    return 0;
}