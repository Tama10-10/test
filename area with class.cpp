#include<iostream>
using namespace std;
class Area
{int a,b;
public:
    int area(void);
    void get_dimention(void);

};
void Area::get_dimention(void)
{
    cout<<"enter length:";
    cin>>a;
    cout<<"enter widght:";
    cin>>b;
}
int Area::area(void)
{
    return (a*b);
}

int main()
{Area d;
    d.get_dimention();

    cout<<d.area();


}
