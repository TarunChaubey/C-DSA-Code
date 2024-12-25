#include<iostream>
using namespace std;

int main() {
    int arr[10] = {21,54,67,74,35,78,23,78,36,80};
    int key = 36;
    cout << "Size of Arrays " << sizeof(arr)/sizeof(arr[0]) << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] == key) {
            cout << i << "  ";
        }
    }
    
}