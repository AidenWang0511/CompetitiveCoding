#include<bits/stdc++.h>
using namespace std;

struct Point{
    int t, id;
};

Point s[200001];
set<int> begins;
int alone[100001];
int totalCover;

bool cmp(const Point a, const Point b){
    return a.t<b.t;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    freopen("lifeguards.in","r",stdin);
	freopen("lifeguards.out","w",stdout);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        s[i] = {a,i};
        s[i+n] = {b, i};
    }

    sort(s, s+2*n, cmp);

    set<int>::iterator it;
    for(int i=0; i<2*n; i++){
        if(begins.size() == 1){
            it = begins.begin();
            alone[*it] += s[i].t - s[i-1].t;
        }
        if(!begins.empty()){
            totalCover += s[i].t - s[i-1].t;
        }

        if(begins.count(s[i].id) > 0){
            begins.erase(s[i].id);
        }else{
            begins.insert(s[i].id);
        }
    }
    int minAlone = INT_MAX;
    for(int i=0; i<n; i++){
        minAlone = min(minAlone, alone[i]);
    }

    cout<<totalCover-minAlone<<endl;

    return 0;
}
