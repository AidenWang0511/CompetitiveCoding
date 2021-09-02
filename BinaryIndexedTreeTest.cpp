#include<bits/stdc++.h>
using namespace std;

long long N,M,a[100001], bit1[100001], bit2[100001];

void update(long long bit[], int pos, int val){
    for(int i=pos; i<100001; i+=i&-i){
        bit[i] += val;
    }
}

long long query(long long bit[], int pos){
    long long sum=0;
    for(int i=pos; i>0; i-=i&-i){
        sum += bit[i];
    }
    return sum;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>M;
    for(int i=1; i<=N; i++){
        cin>>a[i];
        update(bit1, i, a[i]);
        update(bit2, a[i], 1);
    }
    for(int i=1; i<=M; i++){
        char op;
        cin>>op;
        if(op == 'C'){
            int p,x;
            cin>>p>>x;
            update(bit1,p,-a[p]+x);
            update(bit2, a[p], -1);
            update(bit2, x, 1);
            a[p] = x;
        }else if(op == 'S'){
            int x,y;
            cin>>x>>y;
            cout<<query(bit1, y) - query(bit1, x-1)<<endl;
        }else{
            int x;
            cin>>x;
            cout<<query(bit2, x)<<endl;
        }
    }

    return 0;
}