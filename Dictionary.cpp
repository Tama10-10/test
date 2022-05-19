
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s[0]-97;
        int x=n*25+n;
        int y=(s[1]-97)-n;
        if(s[0]>s[1])
        cout<<x+y+1<<endl;
        else
          cout<<x+y<<endl;

    }

}
