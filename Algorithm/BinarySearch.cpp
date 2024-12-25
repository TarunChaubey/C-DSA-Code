#include<iostream>
using namespace std;

int Search(int key, int h,int l, int array[]){
    int mid = (h+l)/2;
    while(h >= l) {
        if (key == array[mid]) {
            return mid;
        } else if (key < array[mid])
        {
            h = mid -1;
        } else
        {
            l = mid + 1;
        }

        return -1;
    }
    return 0;
}

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 6;
    int size = sizeof(array)/array[0];
    int result = Search(key,size-1,0,array);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}