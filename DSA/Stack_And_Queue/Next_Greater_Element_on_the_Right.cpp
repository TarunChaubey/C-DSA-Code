#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> O(n^2)
//  Space complexity -> O(1+1)

void Print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}


// Method -1
// Time Ccomplexity -> O(n^2)
// Brute Force Apporch
void NGE_Method_1(int arr[], int n)
{
    int next,i,j;
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout<<arr[i]<<"--   "<<next<<endl;
    }
}


// Method -2
// Time Ccomplexity -> O(n)
// By Using Stack
void NGE_Method_2(int arr[], int n){
    stack<int> s;
 
    /* push the first element to stack */
    s.push(arr[0]);
 
    // iterate for rest of the elements
    for (int i = 1; i < n; i++)
    {
 
        if (s.empty()){
            s.push(arr[i]);
            continue;
        }
 
        /* if stack is not empty, then
           pop an element from stack.
           If the popped element is smaller
           than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */
        while (!s.empty() && s.top() < arr[i])
        {
            cout<<s.top()<<" --> "<<arr[i]<<endl;
            s.pop();
        }
 
        /* push next to stack so that we can find
        next greater for it */
        s.push(arr[i]);
    }
 
    /* After iterating over the loop, the remaining
    elements in stack do not have the next greater
    element, so print -1 for them */
    while (!s.empty()){
        cout<<s.top()<<" --> "<<-1<<endl;
        s.pop();
    }
}


int main(){
    // int arr[] = { 11, 13, 21, 3};
    int arr[] = {3,10,4,2,1,2,6,7,2,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print(arr, n);
    cout<<endl;
    NGE_Method_2(arr, n);
    return 0;
}