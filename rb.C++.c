#include<bits/stdc++.h>
using namespace std;
int main()
{int n,t,b,r,i,j,k,x,y;
cin>>t;
for(k=1;k<=t;k++)
{
    cin>>n>>r>>b;
    while(n>1)
    {x=r/(b+1);
        for(i=1;i<=b+1;i++)
        {for(j=1;j<=x;j++)
            {cout<<"R";
        }
        cout<<"B";
        }
        n=n-(x+1);

    }
  cout<<endl;


}






}
