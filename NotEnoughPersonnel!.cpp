#include<bits/stdc++.h>
using namespace std;

pair<int, pair<string,int>> arr[501];
int N,Q;

bool cmp(pair<int, pair<string,int>> a, pair<int, pair<string,int>> b){
    if(a.first == b.first) return a.second.second < b.second.second;
    return a.first < b.first;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i].second.first>>arr[i].first;
        arr[i].second.second = i;
    }
    sort(arr,arr+N, cmp);
    cin>>Q;
    for(int i=0; i<Q; i++){
        int lo, hi, check = 0;
        cin>>lo>>hi;
        hi += lo;
        for(int j=0; j<N; j++){
            if(arr[j].first <= hi && arr[j].first >= lo){
                check = 1;
                cout<<arr[j].second.first<<endl;
                break;
            }
        }
        if(!check){
            cout<<"No suitable teacher!"<<endl;
        }
    }
}