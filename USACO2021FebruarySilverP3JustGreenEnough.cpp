#include <bits/stdc++.h>
using namespace std;
int num[510][510], x[510];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &num[i][j]);
            if (num[i][j] < 100)
                num[i][j] = 2;
            else if (num[i][j] == 100)
                num[i][j] = 1;
            else
                num[i][j] = 0;
        }
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) {
            int l = 0, hv = 0, nw = 0;
            for (int k = 1; k <= n; k++) {
                //todo
                if(i == j){
                   x[k] = num[i][k];
                }else{
                    if(num[j][k] == 2){
                        x[k] = 2;
                    }else if(num[j][k] == 1 && x[k] == 0){
                        x[k] = 1;
                    }
                }
                if(x[k] == 2){
                    hv = 0;
                    l = k;
                }
                if(x[k] == 1){
                    hv = 1;
                    nw = k-l;
                }
                if(hv){
                    ans += nw;
                }
            }
        }
    cout << ans;
}
