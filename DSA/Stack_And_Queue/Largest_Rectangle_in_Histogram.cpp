#include<bits/stdc++.h>
using namespace std;


// Width = 1
// size of Array i.e Number of Histogram
// Array represent the Height of Array

// Time Complexity O(n^2)
void BruteForce(int height[],int n){
    int leftmin = 0;
    int rightmin = 0;
    // cout<<"Index : "<<n-1<<endl;
    for(int i=0;i<n;i++){
        int leftpointer = (n-1-i);
        int rightpointer =(n-leftpointer-1);
        // -1 For Index  and Second -1 for Access Left Side Element
        leftmin = height[leftpointer];
        // -1 For Index  and Second +1 for Access Left Side Element
        // n-1+1 = n
        rightmin = height[rightpointer];
        // cout<<"Index Number : "<<n-1-i<<", "<<"Left : "<<leftpointer<<", "<<"Right : "<<rightpointer<<endl;

        while(leftpointer >= 0 || rightpointer >= 0){
            if(height[leftpointer] <= leftmin){
                leftmin = height[leftpointer];
                leftpointer--;
            }

            if(height[rightpointer] <= rightmin){
                rightmin = height[rightpointer];
                rightpointer--;
            }
            leftpointer--;
            rightpointer--;
        }
        cout<<"Number : "<<height[n-i]<<" ";
        cout<<"Left Min : "<<leftmin<<", "<<"Right Min : "<<rightmin<<", Area : "<<(leftmin+rightmin)*2<<endl;
    }
    // cout<<"Left Min : "<<leftmin<<", "<<"Right Min : "<<rightmin<<endl;
}

// Time Complexity O(n)
void OptimizeSolution(int height[],int n){

}


int main(){
    int area[] = {2,1,5,6,3};
    int size = sizeof(area)/sizeof(area[0]);

    // Time Complexity O(n^2)
    BruteForce(area,size);

    // Time Complexity O(n)
    OptimizeSolution(area,size);
    return 0;
}