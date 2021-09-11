#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int a,b;
	cin>>a;
	for(int i=0; i<a; i++){
		cin>>b;
		if(b==0){
			st.pop();
		}else{
			st.push(b);
		}
	}
	int ans=0;
	while(st.size()!=0){
		ans+=st.top();
		st.pop();
	}
	cout<<ans<<endl;
	return 0;
}

