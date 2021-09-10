#include<bits/stdc++.h>
using namespace std;

deque<pair<long long,long long>> q;
vector<long long> t;
bool use[20002];
int C,N;

bool cmp(pair<long long, long long> a, pair<long long, long long> b){
    if(a.second == b.second){
        return a.first<b.first;
    }else{
        return a.second<b.second;
    }
}

int main(){
    freopen("helpcross.in","r",stdin); 
	freopen("helpcross.out","w",stdout); 

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>C>>N;
    for(int i=0; i<C; i++){
        long long a;
        cin>>a;
        t.push_back(a);
    }
    for(int i=0; i<N; i++){
        long long a,b;
        cin>>a>>b;
        q.push_back({a,b});
    }

    sort(t.begin(), t.end());
    sort(q.begin(), q.end(),cmp);

    int ans=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<C; j++){
            if(!use[j] && t[j] <= q[i].second && t[j] >= q[i].first){
                use[j] = true;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
