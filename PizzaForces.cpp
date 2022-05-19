#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long int s=2.5*n;
            for(int i=1; ;i++)
            {
                if(s%15==0||s%20==0||s%25==0||s%(15+20)==0||s%(15+25)==0||s%(20+25)==0||s%(15+25+20)==0)
                {
                    cout<<s<<endl;
                    break;
                }
                else
                    s++;
            }

    }


}




