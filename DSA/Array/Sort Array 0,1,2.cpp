#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->


void sortColors(vector<int>& nums){
    int lo = 0; 
    int hi = nums.size() - 1; 
    int mid = 0; 

    while(mid <= hi){ 
        switch(nums[mid]){
            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
    }
}

int main(){

    vector<int> v = {1,2,0,1,0,2,0,0,1,2,0,1,0};

    cout<<sortColors(v)<<endl;

    return 0;
}