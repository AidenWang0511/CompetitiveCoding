#include <bits/stdc++.h>
using namespace std;
int a[10001],b[10001],w[10001],dis[2501];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n,m,s,t;
    cin >> n >> m >> s >> t;
    for (int i = 1; i <=m ; i++) {
        cin >> a[i] >> b[i] >> w[i];
    }

    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;  // 注意起 始点是ts！！！
	//todo 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(dis[a[j]] + w[j] < dis[b[j]]) {
                dis[b[j]] = dis[a[j]] + w[j];
            }
            if(dis[b[j]] + w[j] < dis[a[j]]){
                dis[a[j]] = dis[b[j]] + w[j];
            }
        }
    }

    cout << dis[t] << endl;
    return 0;
}
