#include<bits/stdc++.h>
using namespace std;
typedef pair<long long, int> pi;
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<pi> v, v2;
long long input;
int N, arr[21];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=0; i<N; i++){
        cin>>input;
        pq.push({input,0});
    }
    while(!pq.empty()){
        pi x = pq.top();
        pq.pop();
        v.push_back(x);
    }
    for(pi x:v){
        for(int i=0; i<N; i++){
            if(arr[i]<=x.first){
                x.second++;
            }
        }
        v2.push_back(x);
        //cout<<x.first<<"  "<<x.second<<endl;
    }
    int count = 0;
    long long ans = 1;
    for(pi x:v2){
        //cout<<ans<<"  "<<x.second<<"  "<<count<<endl;
        ans = ans*(x.second-count);
        count++; 
    }
    cout<<ans<<endl;
    return 0;
}