#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;
int cmp = 10000000;

int x[MAXN], y[MAXN];
int d1[2*MAXN], d2[2*MAXN];
int n, k;

int main (void) {
    int ans = cmp;
	cin>>n>>k;
    for (int i = 0; i < n; ++i) {
	int r, c;
        cin>>r>>c;
        x[r]++;
        y[c]++;
        d1[r-c+MAXN]++;
        d2[r+c]++;
        if (x[r] == k || y[c] == k || d1[r-c+MAXN] == k || d2[r+c] == k) {
            if (i+1 < ans)	ans = i + 1;
        }
    }

    if (ans < cmp) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}
