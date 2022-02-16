#include <bits/stdc++.h>
using namespace std;

int N, num4, num5;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
    
    cin>>N;
    num4 = N/4;
    num4 = num4/5 + 1;
    cout<<num4<<endl;

    return 0;
}
