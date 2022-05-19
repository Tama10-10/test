#include<iostream>
using namespace std;
void swap(int &x,int &y,int &z)
{int temp=x;
x=y;
y=z;
z=temp;
}
int main()
{int a,b,c;
cout<<"enter the variable before swapping:";
cin>>a>>b>>c;
swap(a,b,c);
 cout<<"After swapping a = "<<a<<" b ="<<b<<" c= "<<c;

}
