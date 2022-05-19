#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    int x=*(++s.begin());
if(s.count(x)==0)
    cout<<"NO"<<endl;
else
    cout<<x<<endl;



}
