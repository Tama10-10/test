#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,t,s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r>>c;
         if(r<c)
            swap(r,c);
        if(c==1 &&(r-c)>=2)
            cout<<"-1"<<endl;
            else
            {
     if((r+c)%2==0)
     s=((c-1)*2)+((r-c)*2);
    else
        s=((c-1)*2)+((r-c)*2)-1;
    cout<<s<<endl;

    }
    }
}
