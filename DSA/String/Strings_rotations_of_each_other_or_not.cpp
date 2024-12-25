#include<bits/stdc++.h>
using namespace std;


// Method 1
bool CheckStringRotation_1(string str1,string str2){
   /* Check if sizes of two strings are same */

   if(str1.length()!=str2.length()){
        return false;
   }
   string temp=str1+str1;
   return (temp.find(str2)!=string::npos);
}

bool CheckStringRotation_2(string str1,string str2){
    queue<char> q;

    for(char c:str1){
        q.push(c);
    }

    for(char c:str2){
        q.push(c);
    }

    

}

int main(){

    //  Case -1 
    string str1 = "geeksforgeeks";
    string str2 = "forgeeksgeeks";

    //  Case -2
    string str3 = "mightandmagic";
    string str4 = "andmagicmigth";

    // Method 1
    if(CheckStringRotation(str3, str4))
     printf("Strings are rotations of each other");
    else
      printf("Strings are not rotations of each other");

    // Method 2
    if(CheckStringRotation(str3, str4))
     printf("Strings are rotations of each other");
    else
      printf("Strings are not rotations of each other");
    return 0;
}