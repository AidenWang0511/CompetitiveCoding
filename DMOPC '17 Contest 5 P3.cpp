#include <bits/stdc++.h>
using namespace std;

int N;
long long A[100001];
long long gcd, ans = 1;

long long GCD (long long n1, long long n2) {
    return n2 == 0 ? n1 : GCD(n2, n1 % n2);
}

int main () {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin>>A[i];
        gcd = GCD(gcd, A[i]);
    }
    for (long long i=2; i<=(long long) sqrt(gcd); i++) {
        if(gcd % i == 0) ans = max(ans, i);
        while(gcd % i == 0) gcd = gcd/i;
    }
    ans = max(ans, gcd);
    if (ans == 1) cout<<"DNE"<<endl;
    else cout<<ans<<endl;
    return 0;
}
