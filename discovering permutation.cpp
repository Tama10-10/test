#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>k;
        cout<<"Case "<<j<<":"<<endl;
        string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        s.erase(s.begin()+n,s.end());
        cout<<s<<endl;

         for(int i=0;i<k-1;i++)
        {
            bool b = next_permutation(s.begin(),s.end());
            if(b==1 )
                cout<<s<<endl;
            else
                break;
        }


}
}
