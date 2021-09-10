#include<bits/stdc++.h>
using namespace std;

long long N, prevM, curM, prevN, curN;
int main(){
    freopen("moobuzz.in","r",stdin); 
	freopen("moobuzz.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N;
    
    curN = N;
    prevN = 0;
    curM = N/3 + N/5 - N/15;
    prevM = 0;

    while((curM - prevM) != 0){
        prevN = curN;
        curN = prevN + (curM-prevM);
        prevM = curM;
        curM = curN/3 + curN/5 - curN/15;
    }

    cout<<curN<<endl;

    return 0;
}
