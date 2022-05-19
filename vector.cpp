#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    vector<vector<int>>v;
    vector<int>a={1,2,3};
    vector<int>b={3,4};
    v.push_back(a);
    v.push_back(b);
    for(auto u:v)
    {
        for(auto g:u)
            cout<<g<<" ";
        cout<<endl;
    }
}
