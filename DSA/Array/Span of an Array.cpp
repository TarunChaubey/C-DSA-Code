#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]  = {100,20,50,60,70,110,40,80,90,10};
    int max=arr[0];
    int min=arr[1];
    int size = 10;
    int i = 2;

    while(i < size){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
        i++;
    }
    cout<<max-min<<endl;
    return 0;
}