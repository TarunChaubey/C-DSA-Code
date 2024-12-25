#include<iostream>
using namespace std;


int count=0;
void print(){
    if(count == 5){
        return;
    }
    cout<<1<<endl;
    count++;
    print();
    
}

// it print 1 upto 64911
// it's called stack overflow condition

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    print();

    return 0;
}