
// Singal Inheritance

#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
        Teacher(){
            cout<<"Hey, I am a Teacher"<<endl;
        }
};

// inheritate Teacher class in MathTeachers class
// Teacher - Parent Class
// MathsTeacher Child Class
class MathTeacher: public Teacher{
    public:
        MathTeacher(){
            cout<<"Hey, I am a Maths' Teacher"<<endl;
        }

        string college_name="Youtube";
};

int main(){
    MathTeacher obj;

    // Access child class variable
    cout<<"College Name is "<<obj.college_name<<endl;
    return 0;
}