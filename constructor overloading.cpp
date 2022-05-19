#include<iostream>
using namespace std;
class construct
{ int area;
public:
    construct()
    {
        area = 0;
    }
    construct(int a,int b)
    {
        area = a*b;
    }
    void display(void)
    {
        cout<<area<<endl;
    }

};
int main()
{ construct c;
construct c2(12,4);
c.display();
c2.display();

}
