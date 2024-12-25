#include<bits/stdc++.h>
using namespace std;


string intToRoman(int num) {
        
        int numbers[]   = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string res;
        
        for(int i=0; i<13; i++)
        {
            // Main Hook
            // When num become's lower than 100 then loop breck and i++ happed
            while(num >= numbers[i])
            {
                num -= numbers[i];
                res += romans[i];
            }
        }
        
        return res;
        
    }


// Fasted and Tricky 
string Integer_To_Roman(long long int num){
    string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string ths[]={"","M","MM","MMM"};
        
    return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
}

int main(){
    int t;
    long long n;
    string s;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>t;
    int temp;
    while(t--)
    {
        cin>>n;
        // s = Integer_To_Roman(n);
        s = intToRoman(n);
        cout<<s<<endl;
    }
    return 0;
}