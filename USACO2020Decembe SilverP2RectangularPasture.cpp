#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2505;
int n, x[MAXN], y[MAXN], psa[MAXN][MAXN], cx[MAXN], cy[MAXN], id[MAXN];
cx[0] = 1;
cy[0] = -1;

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i]>>y[i];
        cx[i] = x[i];
        cy[i] = y[i];
    }
    sort(x, x+n);
    sort(y, y+n);
    for(int i=1; i<=n; i++){
        x[i]= 
    }
    return 0;
}