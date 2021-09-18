#include<bits/stdc++.h>
using namespace std;

int N;
bool arr[100001];
vector<int> b,e;

int main(){
    freopen("highcard.in","r",stdin); 
	freopen("highcard.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N;
    
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        arr[a] = true;
    }
    for(int i=1; i<=2*N; i++){
        if(arr[i]) e.push_back(i);
        else b.push_back(i);
    }

    int ans=0, i=0, j=0;
    while(i<N && j<N){
        if(b[i] > e[j]){
            ans++;
            i++;
            j++;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
