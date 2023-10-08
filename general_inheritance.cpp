/*Exp-14-Inheritance
exp14_1-General inheritance*/
#include<iostream>
using namespace std;
// Base class
class vehicle{
    public:
     string brand="Ford";
     void color(){
        cout<<"Red\n";
     }
};

// derived class
class car:public vehicle{
    public:
     string model="Mustang";
};
int main()
{
    car mycar;
    mycar.color();
    cout<<mycar.brand +" " + mycar.model;
    return 0;
}
/*output:
Red
Ford Mustang*/