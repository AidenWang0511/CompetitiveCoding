#include <bits/stdc++.h>
using namespace std;

int K,M,N;
long long l[200005], r[200005], pos[200005];
pair<int,int> arr[200005];

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

void find(int x){
    if(arr[x].first < pos[1]){
        l[1] += arr[x].second;
        return;
    }
    if(arr[x].first > pos[M]){
        r[M] += arr[x].second;
        return;
    }
    int lo=1, hi=M, ans=0;
    while(lo<=hi){
        int mid = (lo + hi) / 2;
        if(arr[x].first > pos[mid]){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }

    if(arr[x].first - pos[ans] <= pos[ans+1] - arr[x].first){
        r[ans] += arr[x].second;
    }else{
        l[ans] += arr[x].second;
    }
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>K>>M>>N;
    for(int i=1; i<=K; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    for(int i=1; i<=M; i++){
        cin>>pos[i];
    }

    sort(arr+1, arr+1+K);
    sort(pos+1, pos+1+M);
    for(int i=1; i<=K; i++){
        find(i);
    }
    vector<long long> llv;
    for(int i=1; i<=M; i++){
        llv.push_back(l[i]);
        llv.push_back(r[i]);
    }

    sort(llv.begin(), llv.end());
    long long ans = 0;
    int counter = llv.size() - 1;
    for(int i=N; i>=1; i--){
        ans+=llv[counter];
        counter--;
    }
    cout<<ans<<endl;

    return 0;
}