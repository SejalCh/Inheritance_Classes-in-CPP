/*exp14_3-multilevel inheritance*/
#include<iostream>
using namespace std ;
class firstname
{
    public:
    firstname()
    {
        cout<<"This is Sejal";
    }
};
class name: public firstname{

};
class Fullname : public name{

};
int main()
{
    Fullname n;
    return 0;
};
/*output
This is Sejal*/