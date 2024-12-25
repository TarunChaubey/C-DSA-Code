#include<bits/stdc++.h>
using namespace std;

void sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size());
    int l=0,r=nums.size()-1;
    for(int k=r;k>=0;k--)
    {
        res[k]=(abs(nums[l])>abs(nums[r]))?nums[l]*nums[l++]:nums[r]*nums[r--];
        cout<<nums[l]<<" | "<<nums[r]<<endl;
        cout<<""<<abs(nums[l])<<" | "<<abs(nums[r]) <<cout<<nums[l]*nums[l++]<<endl;
    }
    
    // return res;
    }

int main(){
    vector<int> arr = {-1,0,3,10};
    sortedSquares(arr);
}