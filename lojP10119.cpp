#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int LOGN = 20;

int Log[N] = {-1}, f[N][LOGN + 1], a[N]; // f[i][j]  存储[i, i+2^j-1]之间的最值
int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin>>n>>m;
    for(int i=1; i<=n; ++i) {
        cin>>a[i];
    }

    for(int i=1; i<=n; ++i) {
        f[i][0]=a[i];
        //todo   // 预处理出长度为1~n的log值
        Log[i] = Log[i/2] + 1;
    }

    //todo 
    for(int j=1; j<=LOGN; j++){
        for(int i=1; i+(1<<j)-1 <=n; i++){
            f[i][j] = max(f[i][j-1], f[i+(1<<(j-1))][j-1]);
        }
    }

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin>>x>>y;
        //todo 
        int s=Log[y-x+1];
        int ans = max(f[x][s], f[y-(1<<s)+1][s]);
        cout<<ans<<endl;
    }

    return 0;
}
