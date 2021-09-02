#include <bits/stdc++.h>
using namespace std; 

int n;
vector<int> lis;
  
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n;
    for(int i=1,x; i<=n; i++){
        cin>>x;
        if(lis.empty() || x>lis.back()) lis.push_back(x);
        else{
            int pos = lower_bound(lis.begin(), lis.end(), x) - lis.begin();
            lis[pos] = x;
        }
    }
    cout<<lis.size()<<endl;
    return 0;
}