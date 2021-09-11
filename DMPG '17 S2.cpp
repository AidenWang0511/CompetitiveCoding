#include <bits/stdc++.h>
using namespace std;
int p[100001];

int find(int x) {
    if (p[x] != x){
        p[x] = find(p[x]);
    }
    return p[x];
}

void link(int x, int y){
    if(x<=y){
        p[y] = x;
    }else{
        p[x] = y;
    }
    
}

void connect(int x, int y){
    link(find(x), find(y));
}

void make(int x) {
    p[x] = x;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    char user;
    int N,Q;
    cin>>N>>Q;
    int a,b;
    for(int i=1; i<=N; i++){
        make(i);
    }
    for(int i=0; i<Q; i++){
        cin>>user;
        if(user == 'A'){
            cin>>a>>b;
            connect(a,b);
        }else if (user == 'Q'){
            cin>>a>>b;
            if(find(a) == find(b)){
                cout<<'Y'<<"\n";
            }else{
                cout<<'N'<<"\n";
            }
        }
    }
    return 0;
}
