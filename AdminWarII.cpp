#include<bits/stdc++.h>
using namespace std;
vector<long long> f,x;
int N, Fpts=0, Xpts=0, start1, start2, end;

 int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        f.push_back(a);
    }
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        x.push_back(a);
    }
    sort(f.begin(), f.end());
    sort(x.begin(), x.end());
    start1 = 0; start2 = 0;
    while(start1 <= N){
        if(x[start2] < f[start1]){
            Fpts++;
            start1++; start2++;
        }else{
            start1++; 
        }
    }
    start1 = 0; start2 = 0;
    while(start1 <= N){
        if(f[start2] < x[start1]){
            Xpts++;
            start1++; start2++;
        }else{
            start1++; 
        }
    }
    cout<<Fpts<<endl;
    cout<<Xpts<<endl;
    return 0;
}