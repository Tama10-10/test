#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,c=0,c1=0,c2=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int a[s.size()];
        for(int i=0;i<s.size();i++)
        {
            a[i]=s[i]-97+1;
        }
        if(s.size()%2==0)
          { for(int i=0;i<s.size();i++)
          {
              c=c+a[i];
          }
          cout<<"Alice"<<" "<<c<<endl;

          }

          else
              {if(s.size()==1)
              cout<<"Bob"<<" "<<a[0]<<endl;

                  else{
                  for(int i=0;i<s.size()-1;i++)
                  {
                      c1=c1+a[i];
                  }

                   for(int i=1;i<s.size();i++)
                  {
                      c2=c2+a[i];
                  }
                     c = max(c1,c2);
                     if(c==c1)
                     {
                         cout<<"Alice"<<" "<<c1-a[s.size()-1]<<endl;
                     }
                     else

                   {
                         cout<<"Alice"<<" "<<c2-a[0]<<endl;;
                     }

              }
}


c=0;
c1=0;c2=0;


}}
