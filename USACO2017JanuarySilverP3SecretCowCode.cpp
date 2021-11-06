#include<bits/stdc++.h>
using namespace std;
 

char find(string s, long long index){
    if(index < s.size()){
        return s[index];
    }
    long long sLen = s.size();
    while(2*sLen <= index){
        sLen *= 2;
    }
    if(sLen == index){
        return find(s, sLen-1);
    }
    else{
        return find(s, index-sLen-1);
    }

}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    freopen("cowcode.in","r",stdin); 
	freopen("cowcode.out","w",stdout); 

    long long N;
    string s;

    cin>>s>>N;
    cout<<find(s,N-1)<<endl;

    return 0;
}