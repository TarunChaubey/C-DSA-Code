#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt = "tarunchaubey";
    string pat = "aubey";

    bool res = true;

    int N = txt.size();
    int M = pat.size();

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M){
            cout << "Pattern found at index - String "<< i << endl;
            cout << "Pattern found at index - End "<< M << endl;
            cout << " Patter Are - "<< txt.substr(i,M)<<endl;
        }

    }
    return 0;
}