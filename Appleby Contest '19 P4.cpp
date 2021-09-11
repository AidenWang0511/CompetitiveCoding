#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    
    int N,x1,y1,x2,y2,ans=0;
    cin>>N;
    pair<int, int> points[N];
    set<pair<int,int>> st;
    for(int i=0; i<N; i++){
    	cin>>points[i].first>>points[i].second;
    	st.insert( {points[i].first,points[i].second} );
	}
	for(int i=0; i<N; i++){
		x1 = points[i].first;
		y1 = points[i].second;
		for(int j=i+1; j<N; j++){
			x2 = points[j].first;
			y2 = points[j].second;
			//cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
			//cout<<st.count({1,1})<<endl;
			//cout<<st.count({5,5})<<endl;
			if(st.count({x1,y2}) && st.count({x2,y1})){
				//cout<<x1<<' '<<x2<<' '<<y1<<' '<<y2<<endl;
				ans = max(ans, abs(y2-y1)*abs(x2-x1));
			} 
		}
	}
	cout<<ans<<endl;
    
    return 0;
}
