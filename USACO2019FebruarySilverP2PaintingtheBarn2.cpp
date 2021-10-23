#include<bits/stdc++.h>
using namespace std;

int n, k;
int vis[1005][1005];
int prefix[1005][1005];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    freopen("paintbarn.in","r",stdin);
	freopen("paintbarn.out","w",stdout);

    cin >> n >> k;
    int x1, y1, x2, y2;
    for(int i = 1; i <= n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
		prefix[x1+1][y1+1]++;
        prefix[x1+1][y2+1]--;
        prefix[x2+1][y1+1]--;
        prefix[x2+1][y2+1]++;
    }
    int ans = 0;
    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            prefix[i][j] += prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            if(prefix[i][j] == k){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
