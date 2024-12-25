#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(5); //{0,0,0,0,0};

    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); // {20,20,20,20,20} 
    // v2 inheritate all element of v1

    // take vector to be {10,20,30,40}
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it  = it + 2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    // ways of printing the vectors
    for (vector<int>::iterator it = v.begin(); it != v.end()){
        cout<<*(it)<<" ";
    }

    for (auto it = 0; it = v.begin(); it != v.end())
    {
        cout<<*(it)<<" ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }
    
    // {10,20,12,23}
    v.erase(v.begin()) // erase element at 0th location i.e 10

    v.erase(v.begin()+1); // erase element at 1st location i.e 20

    v.erase(v.begin()+2, v.begin()+5); //erase all element from 2nd index to 5th index
    

    // Insert
    vector<int> v(2,100); //{100,100}
    // vector(location,value)
    v.insert(v.begin(), 300); //{300,100,100

// vector(from_location,element quantity,element,value)
    v.insert(v.begin()+1,2,5 300); //{300,5,5,100,100} index 2 number i.e 5 and 5 after index v,begin()+1

    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end());
    // {50,50,300,5,5,100,100}

    // {10,20}
    cout<<v.size()<<endl; // 2

    // {10,20}
    cout<<v.pop_back()<<endl; // {10}


    // Swap 

    // v1 -> {10,20}
    // v2 -> {30,40}
    v.swap(v2); // v1 -> {30,40},   v2 -> {10,20}

    // erase the entire vector
    v.clear();

    v.empty();
    return 0;

}