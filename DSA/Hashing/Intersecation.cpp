#include<bits/stdc++.h>
using namespace std;

    
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main(){
    int ar1[] = {1,2,3,4,5,6,8};
    int ar2[] = {5,6,8};

    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);

    printIntersection(ar1,ar2,m,n);
    return 0;
}