#include <bits/stdc++.h>
using namespace std;

long long K, u[1000001], N, f[1000001], psa[1000001];

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>K;
	for (int i=0; i<K; i++) {
	    cin >> u[i];
	    psa[u[i]] = 1;
	}
	for (int i=1; i<1000001; i++) psa[i] += psa[i - 1];
	cin >> N;
	for (int i=0; i<N; i++) {
	    cin>>f[i];
	    cout<<(f[i] - psa[f[i]])<<endl;
	}
  	return 0;
}
