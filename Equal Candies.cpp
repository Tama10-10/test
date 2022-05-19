#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n;
cin>>t;
while(t--)
{int s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     for(int i=1;i<n;i++)
    {
        s=s+(a[i]-a[0]);
    }
    cout<<s<<endl;
}
}
