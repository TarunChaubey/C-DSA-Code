#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->


// Doutch National Flag Problem 

void Print(vector<int> v){
    for(auto& x:v)
        cout<<x<<" ";
}

void sortColors(vector<int>& nums){
    int lo = 0; 
    int hi = nums.size() - 1; 
    int mid = 0; 

    while (mid <= hi){ 
        switch (nums[mid]){ 
            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 

                // We can also used this instead of swap(nums[lo++], nums[mid++]) both are same
                // swap(nums[lo], nums[mid]);
                // lo++;
                // mid++;
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
    vector<int> v = {1,2,0,1,0,2,0,0,1,2,0,1,0,1};


    // Assumption
    //      - left side of low is all zero
    //      - right size of high all two

    // Array Before Sorting
    Print(v);

    // Sorting Array
    sortColors(v);
    cout<<endl;

    // Array After Sorting
    Print(v);
    return 0;
}