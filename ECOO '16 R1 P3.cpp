#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<10; i++){
    	int N,ans;
    	vector<int> v;
    	cin>>N;
    	for(int j=1,input; j<=N; j++){
    		cin>>input;
    		v.push_back(input);
		}
		ans=0;
		for(int i=N; i>1; i--){
			auto big = find(v.begin(), v.end(), i);
			auto small = find(v.begin(), v.end(), i-1);
			if(big<small){
				ans+= small-v.begin();
				v.erase(small);
				v.insert(v.begin(), i-1);
			}
		}
		cout<<ans<<"\n";
	}
    
    return 0;
}
