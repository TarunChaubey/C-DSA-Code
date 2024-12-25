#include<bits/stdc++.h>
using namespace std;

// Methods
// 1. By Using Set Funaction
// 2. By Using map Funaction



//  Using Set Funcation
// void Union(int a[], int size_a, int b[], int size_b){
//     set<int> s;

//     for(int i=0;i < size_a; i++){
//         s.insert(a[i]);
//     }

//     for(int i=0;i < size_b; i++){
//         s.insert(b[i]);
//     }

//     cout<<"Number of Element After Union : "<<s.size()<<endl;

//     cout<<"Element After Union"<<endl;
//     for(auto& x:s){
//         cout<<x<<" ";
//     }
// }


//  Using map Funcation
void Union(int a[], int size_a, int b[], int size_b){
    // map<int,int> mp;
    unordered_map<int,int> mp; 

    for(int i=0;i < size_a; i++){
        mp.insert({a[i], i});
    }

    for(int i=0;i < size_b; i++){
        mp.insert({b[i], i});
    }

    cout<<"Number of Element After Union : "<<mp.size()<<endl;

    cout<<"Element After Union"<<endl;
    for(auto& x:mp){
        cout<<x.first<<" ";
    }
}

int main(){
    int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

    int size_a = sizeof(a)/sizeof(a[0]);
    int size_b = sizeof(b)/sizeof(b[0]);

    Union(a,size_a,b,size_b);
    return 0;
}