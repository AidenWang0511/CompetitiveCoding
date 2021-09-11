#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct stops
{
	int c, x;
};

int L, N, rf, rb;
stops st[1000001];
bool isMax[1000001];
int main()
{
	freopen("reststops.in","r",stdin);
	freopen("reststops.out","w",stdout);
	
	cin >> L >> N >> rf >> rb;
	for (int i = 0; i < N; i++)
	{
		cin >> st[i].x >> st[i].c;
	}
	int maxc = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if(st[i].c > maxc){
			maxc = st[i].c;
			isMax[i] = true;
		}
	}
	ll ans = 0, tf = 0, tb = 0;
	
	for(int i=0; i<N; i++){
		if(isMax[i]){
			tb = (ll)(st[i].x);
			ans += (ll)(rf-rb) * (ll)(tb - tf) * (ll)(st[i].c);
			tf = tb;
		}
	}
	
	cout << ans << endl;
	return 0;
}

