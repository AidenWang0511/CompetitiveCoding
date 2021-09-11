#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005],c[100005],N,Q,input,x,y;

int main()
{
	freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    cin>>N>>Q;
    for(int i=1; i<=N; i++){
        cin>>input;
        a[i] = a[i-1];
        b[i] = b[i-1];
        c[i] = c[i-1];
        if(input == 1){
            a[i]++;
        }
        if(input == 2){
            b[i]++;
        }
        if(input == 3){
            c[i]++;
        }
    }
    for(int i=0; i<Q; i++){
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<" "<<b[y]-b[x-1]<<" "<<c[y]-c[x-1]<<endl;
    }

    return 0;
}
