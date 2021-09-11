#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	string str;
	int T = 0;
	int U = 0;
	cin>>N;
	cin>>str;
	for(int i=0; i<N; i++){
		if(str[i] == 'T') T++;
		if(str[i] == 'U') U++;
		if(str[i] != 'A' && str[i] != 'C' && str[i] != 'G' && str[i] != 'U' && str[i] != 'T'){
			T=1;
			U=1;
		}
	}
	if(T>0 && U==0){
		cout<<"DNA";
	}else if(T==0 && U>0){
		cout<<"RNA";
	}else if(T==0 && U==0){
		cout<<"both";
	}else{
		cout<<"neither";
	}
	
	return 0;
} 
