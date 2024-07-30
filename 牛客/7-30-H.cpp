#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ll long long
#define endl '\n' 

const int N = 50;
vector<vector<int>> mp (N);
int n,m;
int depth;

void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,int y;cin>>x>>y;
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	
}

signed main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	//t=1;
	while(t--)
	{
		solve();
	}
	return 0;
} 
