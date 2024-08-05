#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ull unsigned long long
#define endl '\n' 

/*
floyd求多源的最短路，适用于任何图，复杂度o（n^3）； 
用dp[i][j]表示从i到j的最短路
*/
const int inf = 0x3f3f3f3f3f3f;
const int N = 1e2+5;
int n,m;
struct Node
{
	int to,w;	
};
vector<vector<int>> mp(N+1);
int dp[N][N]=inf;
void floyd()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n)
	}
}

void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y,w;cin>>x>>y>>w;
		mp[x].push_back({y,w});
		mp[y].push_back({x,w});
	}
	floyd();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}

signed main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;
	//cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
} 
