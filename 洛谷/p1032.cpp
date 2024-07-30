#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ll long long
#define endl '\n' 

const int N = 10;
string a,b;
string src[N],dis[N];//规则从src转入dis 
int n=0;
struct node
{
	string s;
	int ans;
};
map<string,int> mp;

int bfs()
{
	queue<node> q;
	q.push({a,0});
	mp[a]=1;
	while(!q.empty())
	{
		node now=q.front();q.pop();
		
	}
}

void solve()
{
	cin>>a>>b;
	while(cin>>src[n]>>dis[n])
	{
		n++;
	}
	//cout<<bfs();
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
