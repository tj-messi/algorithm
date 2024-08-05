#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ull unsigned long long
#define endl '\n' 

/*
SPFA就是bellman-fold的队列优化版本，负责解决负权图问题，复杂度 
*/

const int inf = 0x3f3f3f3f;
const int N = 1e5+5;
int n,m;
struct node
{
	int to,w;
};
vector<node> mp[N];
int dp[N];//记录最短距离
int cnt[N];//记录i顶点入队次数，如果大于了n，那么存在负环 
 


void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;cin>>u>>v>>w;
		mp[u].push_back({v,w});
		mp[v].push_back({u,w});
	}
	int st,ed;cin>>st>>ed;
	 
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
