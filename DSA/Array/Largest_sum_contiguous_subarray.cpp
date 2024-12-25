#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->

// osum - overall Sum
// csum - Cummulative Sum

int Solution(int ar[], int size){
    int osum = ar[0];
    int csum = ar[0];

    for(int i=0;i<size;i++){
        if(csum >=0){
            csum += ar[i];
        }
        else{
            csum = ar[i];
        }

        if(csum>osum){
            osum = csum;
        }
    }
    return osum;

}

int main(){
    // int a[6] = {1,4,6,9,8,2};
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(a)/sizeof(a[0]);
    int res = Solution(a,size);
    cout<<"Maximum Contiguous Sum Is "<<res<<endl;
    return 0;
}