#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
string s;
char temp;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>s;
  bool n = next_permutation(s.begin(),s.end());
    if(n==1)
    cout<<s<<endl;
    else
        cout<<"no answer"<<endl;
}

}
