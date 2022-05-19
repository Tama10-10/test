#include<bits/stdc++.h>
using namespace std;
bool isprime(int a)
{int k=0;
     for(int i=2;i<=a/2;i++)
    {
        if(a%i==0 && i!=a)
        k++;

    }
    if(k==0)
        return 1;
    else
        return 0;

}
int main()
{
   int n,m,a;
   cin>>n>>m;
   int c=0;
   for(int i=n+1;i<=m;i++)
   {
      if(isprime(i)==1 )
       {c++;
      if(c==1)
      a=i;}


   }

if(c==1&& a==m)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


}
