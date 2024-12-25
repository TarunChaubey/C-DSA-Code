#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

class MinHeap{
    public:
        int *harr; // pointer to array of element in heap
        int capacity;
        int heap_size;

    MinHeap(int cap){
        heap_size = 0;
        capacity = cap;
        harr = new int[cap];
    }
    void linearSearch(int val){
        for(int i=0; i<heap_size;i++){
            if(harr[i] == val){
                cout<<"Value Found"<<endl;
                return;
            }
        }
        cout<<"Value Not Found"<<endl;
    }

    void printArray(){
        for(int i=0;i<heap_size;i++){
            cout<<harr[i]<<" ";
        }
    }

    // int height()

    int Parent(int i){
        return (i-1)/2;
    }

    int left(int i){
        return (2*i+1);
    }

    int right(int i){
        return (2*i+2);
    }

    void insertKey(int k){
        if(heap_size == capacity){
            cout<<"\n Overflow: Could Not Insert Key \n"<<endl;
            return;
        }

        heap_size++;
        int i = heap_size-1;
        harr[i] = k;

        while(i!=0 && harr[Parent(i)] > harr[i]){
            swap(harr[i],harr[Parent(i)]);
            i=Parent(i);
        }
    }

    int extractMin(){
        if(heap_size <=0)
            return INT_MAX;

        if(heap_size == 1){
            heap_size--;
            return harr[0];
        }

        // Store the minimum value, and remove it from heap
        int root = harr[0];
        harr[0] = harr[heap_size-1];
        heap_size--;
        MinHeapify(0);

        return root;
    }

    void MinHeapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest=i;

        if(l<heap_size && harr[i] < harr[i]){
            smallest = l;
        }

        if(r <heap_size && harr[i] < harr[i]){
            smallest = r;
        }

        if(smallest!=i){
            swap(harr[i],harr[smallest]);
            MinHeapify(smallest);
        }
    }
};



int main(){
    int s;
    cout<<"Enter the size of heap"<<endl;
    cin>>s;
    MinHeap obj(s);
    cout<<"Min Heap Created"<<endl;

    int option, val;

    do{
        cout<<"What operation do you want to perform? "<<" Select Option number. Enter 0 to exit."<<endl;
        cout<<"1. Insert Key/Node"<<endl;
        cout<<"2. Search Key/Node"<<endl;
        cout<<"3. Delete Key/Node"<<endl;
        cout<<"4. Get Min"<<endl;
        cout<<"5. Extract Min"<<endl;
        cout<<"6. Height of Heap"<<endl;
        cout<<"7. Print/Traversal Heap values"<<endl;
        cout<<"8. Clear Screen"<<endl;
        cout<<"0. Exit Program"<<endl;

        cin>>option;

        switch(option){
            case 0:
                break;
            case 1:
                cout<<"INSERT Operation -"<<endl;
                cout<<"Enter VALUE to INSERT in HEAP: ";
                cin>>val;
                obj.insertKey(val);
                cout<<endl;
                break;
            case 2:
                cout<<"SEARCH Operation -"<<endl;
                cout<<"Enter VALUE to SEARCH in HEAP: ";
                cin>>val;
                obj.linearSearch(val);
                break;
            case 3:
                cout<<"DELETE Operation -"<<endl;
                cout<<"Enter INDEX of Heap Array to DELETE: ";
                // cin>>val;
                // obj.deleteKey(val);
                break;
            case 4:
                // cout<<"GET Min value : "<<obj.getMin();
                cout<<endl;
                break;
            case 5:
                cout<<"EXTRACT Min value : "<<obj.extractMin();
                cout<<endl;
                break;
            case 6:
                // cout<<"HEAP TREE HEIGHT : "<<obj.height()<<endl;
                break;

            case 7:
                cout<<"PRINT Heap Array : "<<endl;
                obj.printArray();
                cout<<endl;
                break;

            case 8:
                system("cls");
                break;

            default:
            cout<<"Enter Proper Option number "<<endl;
            }

    }while(option!=0);
    
}