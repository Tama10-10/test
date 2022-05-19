#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,c=0,n;
    for(int i=1;i<=t;i++)
    {cin>>n;
    int a[n];
for(int j=1;j<=n;j++)
{
    cin>>a[j];
}
for(int j=1;j<=n-1;j++)
{
    if(a[j+1]-a[j]==1 || a[j+1]-a[j]==3)
        c++;
}
if(c==n-1)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
c=0;
    }

}



