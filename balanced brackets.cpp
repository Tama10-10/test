#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
for(int i=1;i<=n;i++)
{int c=1;
string s;
stack<char>st;
    cin>>s;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]=='('||s[j]=='{'||s[j]=='[')
            st.push(s[j]);


        else
        {if (st.empty())
        {
            c=0;
            break;
        }
        else
        {
            if(st.top()=='('&& s[j]==')')
            st.pop();
            else if(st.top()=='{'&& s[j]=='}')
                st.pop();
            else if(st.top()=='['&& s[j]==']')
                st.pop();
                else
                {
                    c=0;
                    break;
                }

        }
        }
        }
    if(st.empty()&&c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
