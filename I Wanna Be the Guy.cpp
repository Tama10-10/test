#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    set<int>s;
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {int a;
    cin>>a;
        s.insert(a);
    }
    cin>>y;

     for(int i=0;i<y;i++)
    {int b;
    cin>>b;
 s.insert(b);
    }
    if(s.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;




}
