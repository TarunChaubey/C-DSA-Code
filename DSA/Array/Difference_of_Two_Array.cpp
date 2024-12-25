#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->


// return sum of both array
int calSumUtil(int a[], int b[], int n, int m)
{
    // array to store sum.
    int sum[n];
 
    int i = n - 1, j = m - 1, k = n - 1;
 
    int carry = 0, s = 0;
 
    // Until we reach beginning of array.
    // we are comparing only for second array
    // because we have already compare the size
    // of array in wrapper function.
    while (j >= 0) {
 
        // find sum of corresponding element
        // of both arrays.
        s = a[i] + b[j] + carry;
        sum[k] = (s % 10);
 
        // Finding carry for next sum.
        carry = s / 10;
 
        k--;
        i--;
        j--;
    }
 
    // If second array size is less the first
    // array size.
    while (i >= 0) {
 
        // Add carry to first array elements.
        s = a[i] + carry;
        sum[k] = (s % 10);
        carry = s / 10;
 
        i--;
        k--;
    }
 
    int ans = 0;
 
    // If there is carry on adding 0 index elements.
    // append 1 to total sum.
    if (carry)
        ans = 10;
 
    // Converting array into number.
    for (int i = 0; i <= n - 1; i++) {
        ans += sum[i];
        ans *= 10;
    }
 
    return ans / 10;
}
 
// Wrapper Function
int calSum(int a[], int b[], int n, int m)
{
    // Making first array which have
    // greater number of element
    if (n >= m)
        return calSumUtil(a, b, n, m);
 
    else
        return calSumUtil(b, a, m, n);
}
 


int main(){
    // int arr1[10] = {10,20,30,40,50,60,70,80,90,100};
    // int arr2[10] = {100,90,80,70,60,50,40,30,20,10};

    int size1,size2,res;

    // For Fiest Array
    cout<<"Enter Size of 1st Array"<<endl;
    cin>>size1;
    int arr1[size1];

    for(int i = 0; i < size1; i++)
    {
        /* code */
        cin>>arr1[i];
    }
    
    // For Sencond Array
    cout<<"Enter Size of 2nd Array"<<endl;
    cin>>size2;
    int arr2[size2];
    for(int i = 0; i < size2; i++)
    {
        /* code */
        cin>>arr2[i];
    }

    cout<<calSum(arr1, arr2, size1, size2)<<endl;

    return 0;
}