#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ll long long
#define endl '\n' 

const int N = 2e5+5;
int n,m,s;
struct node
{
	int w,v;//重量、价值 
};
node a[N];

void solve()
{
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)cin>>a[i].w>>a[i].v;
	
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
