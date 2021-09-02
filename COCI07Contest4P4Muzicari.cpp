#include <bits/stdc++.h>
using namespace std; 

string s;
vector<int> lis;
  
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>s;
    for(int i=1,x; i<=s.size(); i++){
        x = s[i-1] - 'a';
        if(lis.empty() || x>lis.back()) lis.push_back(x);
        else{
            int pos = lower_bound(lis.begin(), lis.end(), x) - lis.begin();
            lis[pos] = x;
        }
    }
    cout<<26 - lis.size()<<endl;
    return 0;
}