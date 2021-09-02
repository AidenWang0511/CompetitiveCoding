#include<bits/stdc++.h>
using namespace std;
int N,M;
set<int> arr[2001];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>M;
    for(int i=0; i<M; i++){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a; i<=b; i++){
            arr[i].insert(c);
        }
    }int check = true;
    for(int i=1; i<=N; i++){
        if(arr[i].size() == 2){
            check = false;
        }
    }
    if(check){
        for(int i=1; i<=N; i++){
            for(auto t:arr[i]) cout<<t<<' ';
        }
        cout<<endl;
    }else{
        cout<<"Impossible"<<endl;
    }
    
    return 0;
}