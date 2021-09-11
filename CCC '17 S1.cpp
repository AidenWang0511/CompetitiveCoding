#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int sw[100001]={0};
    int se[100001]={0};
    
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>sw[i];
        if(i>1){
           sw[i] = sw[i-1] + sw[i];
        }
        
    }
    for(int i=1;i<=N;i++){
        cin>>se[i];
        if(i>1){
           se[i] = se[i-1] + se[i];
        }
        
    }
    int i=N;
    for(i=i; i>0;i--){
        if(se[i]==sw[i]){
            cout<<i;
            break;
        }
    }
    if(i==0){
        cout<<0;
    }
    
    
    
    return 0;
}
