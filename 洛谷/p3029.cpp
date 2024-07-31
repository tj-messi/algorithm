#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ll long long
#define endl '\n' 

const int N = 5e4+5;
int x[N],id[N];
vector<int> v;//¿Î…¢ªØ π”√ 
int n;
map<int,int> mp;

void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>x[i]>>id[i];
	for(int i=1;i<=n;i++)
	{
		v.push_back(x[i]);
		mp[id[i]]++;
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	int l=v[0];int r=v[v.size()-1];
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
