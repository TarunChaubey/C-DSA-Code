#include<bits/stdc++.h>
using namespace std;

// Syntax For Declear Class

/*
class{

}
*/

class car{

    public:
        int color[10];
        int speed;

    public:
        void getdata(int distance, int fuel){
            cout<<"Car Cover "<<distance<<" KM Distance In "<<fuel<<" Liter Fuel"<<endl;
        }

        void milaeage(float d, float f);

        void getspeed(){
            cout<<"Speed of Car is "<<speed<<endl;
        }

} bugati;

void car::milaeage(float d, float f){
    cout<<"Mileage of Car is "<<d/f<<" KM/Liter";
}

int main(){

    // Here Swift Is Object
    car Swift;
    // Swift.getdata(130,5);
    // bugati.getdata(150,50);
    // Swift.milaeage(130,7);

    Swift.speed=80;
    Swift.getspeed();
    return 0;
}