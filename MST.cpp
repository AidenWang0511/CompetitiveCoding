#include <bits/stdc++.h>
using namespace std;

struct edge {
    int x, y, w;
};

edge a[10001];
int f[101];
int ans, cnt;

bool cmp(edge x, edge y) { 
	return x.w < y.w; 
}

int find(int x) {
    if (x == f[x]) 
		return x;
    return find(f[x]);
}

void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx != fy) {
        //如果不在一个集合
        f[fy] = fx;
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++) {
        f[i] = i;
    }
    for (int j = 1; j <= m; j++) {
       	cin>>a[j].x>>a[j].y>>a[j].w;
    }
    sort(a + 1, a + m + 1, cmp);  //排序
    for (int i = 1; i <= m; i++) {
        int u = find(a[i].x);
        int v = find(a[i].y);
        if (u != v) {
            ans += a[i].w;
            cnt++;
            merge(u, v);
        }
        if(cnt == n - 1) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
