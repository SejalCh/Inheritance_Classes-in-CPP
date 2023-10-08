/*exp14_4-multiple inheritance*/
#include<iostream>
using namespace std;
class name
{
    public:
name(){
    cout<<"My name is sejal"<<endl;
}

};
class prn{
    public:
    prn()
    {
        cout<<"My prn is 104";
    }
};
class student: public name,public prn{};
int main()
{
    student b1;
    return 0;
}
/*output:
My name is sejal
My prn is 104*/