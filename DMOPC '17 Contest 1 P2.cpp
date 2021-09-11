#include <bits/stdc++.h>
using namespace std;

int N, M, crayons[100001];
map<int, int> cnt;
long long psa[100001], ans;

int main () {
	cin>>N>>M;
	for (int i=1; i<=N; i++) {
		cin>>crayons[i];
		psa[i] = (psa[i - 1] + crayons[i]) % M;
	}
	cnt[0] = 1;
	for (int i=1; i<=N; i++) {
		if (!cnt.count(psa[i])) cnt[psa[i]] = 1;
		else {
			ans += cnt[psa[i]];
			cnt[psa[i]] = cnt[psa[i]] + 1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
