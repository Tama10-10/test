#include<bits/stdc++.h>
using namespace std;
int main()
{int n,t,b,r,i,j,k,x,y,c=0;
cin>>t;
for(k=1;k<=t;k++)
{
    cin>>n>>r>>b;
    while(n>0)
    {x=r/(b+1);
    if((n%2!=0)&&(r%(b+1)!=0))
        x++;
        for(i=1;i<=b+1;i++)
        {for(j=1;j<=x;j++)
            {
            cout<<"R";
            n=n-1;
            if(n<=0)
                break;
        }
        if(n<=0)
                break;
        if(c<b)
        {
       cout<<"B";
       c++;
        n=n-1;}

        if(n<=0)
                break;
        }

    }
  cout<<endl;
c=0;
}
}
