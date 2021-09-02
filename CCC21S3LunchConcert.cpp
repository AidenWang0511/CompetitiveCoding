#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<pair<long long, pair<long long,long long>>>v;
int N;
//P, W,D
long long cost(int x){
    long long ans = 0;
    for(auto t:v){
        long long p = t.first, w = t.second.first, d = t.second.second;
        long long difference = (abs(x-p) - d);
        if(difference > 0)  ans += difference * w;
    }
    return ans;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N;
    for(int i=0; i<N; i++){
        long long p,w,d;
        cin>>p>>w>>d;
        v.push_back({p,{w,d}});
    }
    long long left = 0, right = 1000000000, mid, lv, rv, check;
    while(left<right){
        mid = (left+right)/2;
        lv = cost(mid); rv = cost(mid+1);
        if(lv < rv){
            right = mid;
            check = lv;
        }else{
            left = mid+1;
            check = rv;
        } 
    }

    if(check < cost(left)){
        cout<<check<<endl;
    }else{
        cout<<cost(left)<<endl;
    }
    

    return 0;
}