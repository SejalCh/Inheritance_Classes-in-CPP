/*exp14_2-single inheritance*/
#include<iostream>
using namespace std;
class name{
    public:
    name()
    {
        cout<<"My name is Sejal";
    }
};
class Firstname: public name{
};
int main()
{
    Firstname n;
    return 0;
}
/*output:
My name is Sejal*/