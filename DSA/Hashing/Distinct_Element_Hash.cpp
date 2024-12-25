#include<bits/stdc++.h>
using namespace std;

void CountDistinct(int ar[],int size){
    unordered_set<int> S;

    for(int element:S){
        S.insert(element);
    }


}

int main(){
    int ar[] = {9,8,1,1,9,1,5,3,8,3};
    int size  = sizeof(ar)/sizeof(ar[0]);

    CountDistinct(ar,size);

    return 0;
}