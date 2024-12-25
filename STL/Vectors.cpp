#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr(1,0);
    // size of the vector
    cout<<arr.size()<<endl;
    for (int i = 1; i < 9; i++)
    {
        arr.push_back(i);
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}