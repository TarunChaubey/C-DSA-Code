#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "race a car";
    bool ans=false;
    if(name.length() <= 1) return (ans=true);
    int left = 0, right = name.length()-1;

    while(left<right){
        while(left < right && !isalnum(name[left])) left++;
        while(left < right && !isalnum(name[right])) right--;

        if(left < right && tolower(name[left])!=tolower(name[right])) return false;
        left++;
        right--;
    }
    cout<<ans<<endl;
    return 0;
}