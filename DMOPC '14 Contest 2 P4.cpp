#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int arr[1000000] = {0};
    int psa[1000000] = {0}; // prefix sum array
    int N,mass,Q,a,b;
    cin>>N;
    for(int i = 0; i<N; i++){
        cin>>mass;
        arr[i] = mass;
        if(i>=1){
            psa[i] = arr[i] + psa[i-1];
        }else if(i == 0){
            psa[i] = mass;
        }else{
            
        }
        
    }
    cin>>Q;
    for(int i=0; i<Q; i++){
        mass = 0;
        cin>>a>>b;
        if(a != 0){
            mass = psa[b] - psa[a-1];
            cout<<mass<<"\n";
        }else{
            cout<<psa[b]<<"\n";
        }
    }
    
    
    return 0;
}
