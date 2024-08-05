#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define ull unsigned long long
#define endl '\n' 

/*
¡¥ Ω«∞œÚ–«¥Ê÷¸Õº 
*/
const int MAXN=3e5+5;
struct Node
{
	int to,val,next=0;
};

int head[MAXN]={0};
Node node[MAXN];
int tot=0;

void add(int from,int to,int val)
{
	tot++;
	node[tot].to=to;
	node[tot].val=val;
	node[tot].next=head[from];
	head[from]=tot;
}

void solve()
{
	add(1,2,5);
	add(1,3,4);
	cout<<node[1].val;
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
