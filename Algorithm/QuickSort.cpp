#include<iostream>
using namespace std;

int Partition(int arr[],int s, int e) {
    int pivot = arr[e];
    int pIndex = s;

    for (int i = s; i < e; i++){
        if(arr[i] < pivot) {
            int temp  = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] =temp;
            pIndex++;
        }
    }
    int temp  = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] =temp;

    return pIndex;
}

void QuickSort(int arr[], int s, int e) {
    if(s<e) {
        int p = Partition(arr,s,e);
        QuickSort(arr,s,(p-1)); // Recursive Quick Sort For Left Partition
        QuickSort(arr,(p+1),e); // Recursive Quick Sort For Right Partition
    }
}

int main() {
    int size = 0;
    cout << "Enter size of the Array" << endl;
    cin >> size;
    int myarr[size];
    cout << "Enter " << size << " of Array"<< endl;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        myarr[i] = temp;
    }
    cout << "Arrays Before Sorting " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myarr[i] << " ";
    }
    QuickSort(myarr,0,(size -1));
    cout <<"\nArrays After Sorting " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myarr[i] << " ";
    }
    return 0;
}