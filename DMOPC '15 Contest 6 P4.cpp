#include <iostream>
#include <algorithm>
using namespace std;
struct E{int u, v, w;} e[100002];
int N, K, id[100002], rk[100002], ans, cnt;
bool cmp(E a, E b){ return a.w < b.w;}
int find(int x){if (x!=id[x]) id[x]=find(id[x]); return id[x];}
void merge(int x, int y){
    if (rk[x]>rk[y]) id[y]=x;
    else {id[x]=y; rk[y]=rk[y]+(rk[x]==rk[y]);}
}
int main(){
    scanf("%d %d", &N, &K);
    for(int i=1; i<N; i++){
        scanf("%d", &e[i].w);
        id[i]=i; e[i].u=i; e[i].v=i+1;
    }
    id[N]=N;
    for(int i=1; i+K <=N; i++){
        int fi=find(i), fk=find(i+K);
        if(fi!=fk) {merge(fi, fk); cnt++;}
    }
    if(cnt == N-1) {printf("0\n"); return 0;}
    sort(e+1, e+N, cmp);
    for(int i=1; i<N && cnt<N-1; i++){
        int fu=find(e[i].u), fv=find(e[i].v);
        if(fu!=fv){
            ans+=e[i].w; cnt++;
            merge(fu, fv);
        }
    }
    printf("%d\n", ans);
}
