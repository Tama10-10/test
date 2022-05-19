// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// { Driver Code Starts.
optimize();
	public:
	int TotalPairs(vector<int>v, int k){

	    vector<pair<int,int>>a;
	    for(int i=0;i<v.size();i++)
	    {for(int j=0;j<v.size();j++)
	     {if(i!=j && (v[i]-v[j]==k))
	         a.push_back({v[i],v[j]});
	    }
	}
	sort(a.begin(),a.end());
	int n=unique(a.begin(),a.end())-a.begin();

return n;



}};


// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
