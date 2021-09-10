#include<bits/stdc++.h>
using namespace std;

int w,n;
vector<int> v;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>w>>n;
    for(int i=0,a; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int f,b,ans=0,i=0,j=v.size()-1;
    while(i<=j){
        f=v[i]; b=v[j];
        if(f+b<=w){
            j--; i++; ans++;
        }else{
            j--; ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
