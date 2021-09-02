#include<bits/stdc++.h>
using namespace std;
const int MM = 1e6+2;
struct node {int l,r,sum; bool lz;} seg[MM*4];
int N,M,L;
void up(int idx){
    seg[idx].sum = seg[2*idx].sum + seg[2*idx+1].sum;
}
void down(int idx){
    int lc = 2*idx, rc = 2*idx+1;
    seg[lc].sum = (seg[lc].r - seg[lc].l + 1) - seg[lc].sum;
    seg[rc].sum = (seg[rc].r - seg[rc].l + 1) - seg[rc].sum;
    seg[lc].lz = !seg[lc].lz; seg[rc].lz = !seg[rc].lz; seg[idx].lz = !seg[idx].lz;
}
void build(int l, int r, int idx){
    seg[idx].l = l;
    seg[idx].r = r;
    seg[idx].lz = false;
    if(l==r) {seg[idx].sum = 1; return;}
    int mid = (l+r)/2;
    build(l,mid,2*idx);
    build(mid+1, r, 2*idx+1);
    up(idx);
}
void update(int l, int r, int idx){
    if(seg[idx].l == l && seg[idx].r == r){
        seg[idx].sum = (r-l+1) - seg[idx].sum;
        seg[idx].lz = true; 
        return;
    }
    if(seg[idx].lz) down(idx);
    int mid = (seg[idx].l + seg[idx].r)/2;
    if(r<=mid) update(l,r,2*idx);
    else if(l>mid) update(l,r,2*idx+1);
    else{
        update(l,mid,2*idx);
        update(mid+1,r,2*idx+1);
    }
    up(idx);
}
int findk(int k, int idx){
    if(seg[idx].l == seg[idx].r) return seg[idx].l;
    if(seg[idx].lz) down(idx);
    if(seg[2*idx].sum >= k)return findk(k, 2*idx);
    return findk(k-seg[2*idx].sum, 2*idx+1);
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>M>>L;
    build(1,N,1);
    for(int i=1,l,r; i<=M; i++){
        cin>>l>>r; update(l,r,1);
        if(seg[1].sum < L) cout<<"AC?\n";
        else cout<<findk(L,1)<<"\n";
    }
    return 0;
}