#include<bits/stdc++.h>
using namespace std;
int main()
{string s1,s2;
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>s1>>s2;
    int x=s1.size();
    int y=s2.size();
    if(x==y)
        cout<<"2"<<endl;
    else if(x<y)
        cout<<"-1"<<endl;
    else
        cout<<"1"<<endl;
}



}
