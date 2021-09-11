#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int N, Q, a, b, prefix[MAXN], suffix[MAXN];
string input;


int main(){
	cin>>N>>Q>>input;
	stack<char> colors;
	for(int i=0; i<N; i++){
		prefix[i+1] = prefix[i];
		while(!colors.empty() && colors.top() > input[i]) colors.pop();
		if(colors.empty() || colors.top() < input[i]){
			prefix[i+1]++;
			colors.push(input[i]);
		}
	}
	
	string input2 = "";
	for(int i=N-1; i>=0; i--){
		input2+=input[i];
	}
	
	stack<char> colors2;
	for(int i=0; i<N; i++){
		suffix[i+1] = suffix[i];
		while(!colors2.empty() && colors2.top() > input2[i]) colors2.pop();
		if(colors2.empty() || colors2.top() < input2[i]){
			suffix[i+1]++;
			colors2.push(input2[i]);
		}
	}
	
	while(Q--){
		cin>>a>>b;
		cout<<prefix[a-1] + suffix[N-b]<<"\n";
	}
	
	return 0;
}
