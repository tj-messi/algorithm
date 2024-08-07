#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ull unsigned long long
#define endl '\n' 

/*
tarjan缩点求强联通分量
是一个向下寻找子节点的过程，一旦有“返祖边”
找一个初始的搜索树回溯的时候可以直接用low数组更新low数组，不然只能用dfn来更新 （只看了一眼） 
如果一个点的dfn等于low会被认定为强联通分量的根。 
*/

const int N = 2e5+9;
vector<int> g [N];
int dfn[N];//时间戳
int low[N];//最短的更新戳
int top,idx;
//int col[N];//把强联通分量标记颜色
int cnt1,cnt2;//cnt可以记录强联通量的大小 


void tarjan1(int x,int fa)
{
	dfn[x]=low[x]=++idx;
	
	int child=0;
	for(auto y : g[x])
	{
		if(y==fa)continue;
		if(!dfn[y])
		{
			tarjan1(y,x);
			low[x]=min(low[x],low[y]);
			if(low[y]>low[x])cnt2++;//割边的判断增加 
			child+=(low[y]>=dfn[x]);//不回儿子的判断 
		}
		else low[x]=min(low[x],dfn[y]);
	}
	
	if((!fa&&(child>=2))||(fa&&(child>=1)))cnt1++;//割点的判断增加 
}

void solve()
{
	int n,m;cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		if(!dfn[i])tarjan1(i,0);	
	} 
	cout<<cnt1<<" "<<cnt2<<endl;
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
