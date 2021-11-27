#include <bits/stdc++.h>
using namespace std;

/*
求1号点到其余各顶点的最短路径
有向图
6 9
1 2 1
1 3 12
2 3 9
2 4 3
3 5 5
4 3 4
4 5 13
4 6 15
5 6 4

输出：0 1 8 4 13 17
*/

const int INF = 0x3f3f3f3f;
int e[101][101];
int dis[101];
bool vis[101];

int main() {
    int n, m;  // n表示顶点数  m表示边数
    cin >> n >> m;

    memset(e, 0x3f, sizeof(e));

    for (int i = 1; i <= n; i++) e[i][i] = 0;

    // 读入两点之间的距离
    int t1, t2, w;
    for (int i = 1; i <= m; i++) {
        cin >> t1 >> t2 >> w;
        e[t1][t2] = w;
    }

    for (int i = 1;  i<= n; i++) {
        //todo
        dis[i] = e[1][i];

    }
    vis[1] = true;

    // Dijkstra
    for (int i = 1; i <= n - 1; i++) {
        // 寻找距离源点最短的点u
        int minn = INF, u = -1;
        for (int j = 1; j <= n; j++) {
            //todo
            if(!vis[j] && dis[j] < minn) {
                minn = dis[j];
                u = j;
            }
        }

        // 以u为出发点，对所有的边进行松弛
        vis[u] = true;
        for (int j = 1; j <= n; j++) {
            //todo
            dis[j] = min(dis[j], dis[u] + e[u][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dis[i] << " ";
    }

    return 0;
}
