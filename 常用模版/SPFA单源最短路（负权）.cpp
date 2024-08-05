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
bool vis[N];//�ж��Ƿ��ڶ�������

void init()
{
	memset(cnt,0,sizeof cnt);
	memset(dp,inf,sizeof dp);
	memset(vis,false,sizeof vis);
} 

int spfa(int s)
{
	queue<int> q;
	dp[s]=0;
	q.push(s);
	cnt[s]++;
	vis[s]=true;
	int flag=0;//��־��Ϊ1��ʱ����ڸ���
	while(!q.empty())
	{
		int temp=q.front();q.pop();
		vis[temp]=false;
		int v,w;
		int t=mp[temp].size();
		for(int i=0;i<t;i++)
		{
			v=mp[temp][i].to;
			w=mp[temp][i].w;
			if(dp[v]>dp[temp]+w)
			{
				dp[v]=dp[temp]+w;
				if(!vis[v])
				{
					q.push(v);
					cnt[v]++;
					if(cnt[v]>n)
					{
						flag=1;return flag;
					}
					vis[v]=true;
				}
			}
		}	
	}
	return flag; 
}

void solve()
{
	cin>>n>>m;
	init();
	for(int i=1;i<=m;i++)
	{
		int u,v,w;cin>>u>>v>>w;
		mp[u].push_back({v,w});
		mp[v].push_back({u,w});
	}
	int s,e;cin>>s>>e;
	int result=spfa(s);
	if(result)cout<<"���ڸ���"<<endl;
	cout<<dp[e]<<endl;
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
