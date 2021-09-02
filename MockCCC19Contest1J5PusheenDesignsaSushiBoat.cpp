#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<string, int> p;

const ll MOD = 998244353;
const int MAX = 1001, INF = 0x3f3f3f3f;
int n, k, buf, sz,
	cnt[MAX], dp[MAX][MAX];
vector<int> available;

ll rec(int curri, int currk){
	if(dp[curri][currk] != -1) return dp[curri][currk];
	if(currk == k) return dp[curri][currk] = 1;
	if(curri == sz) return 0;

	return dp[curri][currk] = (((rec(curri + 1, currk + 1) * cnt[available[curri]]) % MOD) + rec(curri + 1, currk)) % MOD;
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	cin >> n >> k;

	memset(dp, -1, sizeof dp);

	for (int i = 0; i < n; ++i) {
		cin >> buf;
		cnt[buf]++;
	}

	for (int i = 1; i <= n; ++i) {
		if(cnt[i]) available.push_back(i);
	}
	sz = available.size();

	if(sz < k){
		cout<<0<<endl;
	}
	else{
        cout<<rec(0,0) % MOD<<endl;
	}
}