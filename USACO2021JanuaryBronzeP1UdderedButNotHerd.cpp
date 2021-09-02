#include<bits/stdc++.h>
using namespace std;

string cowphabet, input;
int ans = 0;

int findIndex(char a){
    for(int i=0; i<26; i++){
        if(cowphabet[i] == a){
            return i;
        }
    }
    return -1;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>cowphabet>>input;
    int prev, cur;
    prev = findIndex(input[0]);
    for(int i=1; i<input.size(); i++){
        cur = findIndex(input[i]);
        
        if(cur > prev){
            prev = cur;
        }else{
            ans++;
            prev = cur;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}