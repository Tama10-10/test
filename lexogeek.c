#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
string s;
char temp;
while(t--)
{
    cin>>s;
    string r=s;
    int n=s.size()-1;
    for(int i=n;i>0;i--)
    {
        if(s[i]>s[i-1])
        {
            temp=s[i];
            s[i]=s[i-1];
            s[i-1]=temp;
            break;
        }

    }
    if(s==r)
        cout<<"No answer"<<endl;
    else
        cout<<s<<endl;

}

}
