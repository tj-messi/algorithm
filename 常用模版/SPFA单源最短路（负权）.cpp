#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ull unsigned long long
#define endl '\n' 

/*
SPFA����bellman-fold�Ķ����Ż��汾����������Ȩͼ���⣬���Ӷ� 
*/

const int inf = 0x3f3f3f3f;
const int N = 1e5+5;
int n,m;
struct node
{
	int to,w;
};
vector<node> mp[N];
int dp[N];//��¼��̾���
int cnt[N];//��¼i������Ӵ��������������n����ô���ڸ��� 
 


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
