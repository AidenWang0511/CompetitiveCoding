#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,P;
	cin>>N>>P;
	vector<pair<int,string>> student;
	for(int i=0; i<N; i++){
		string name;
		cin>>name;
		student.push_back({0,name});
	}
	for(int i=0; i<P; i++){
		for(int j=0; j<N; j++){
			int time, preTime;
			cin>>time;
			student[j].first+=time;
		}
	}
	sort(student.begin(), student.end());
	for(int i=N-1; i>=0; i--){
		cout<<N-i+2<<". "<<student[i].second<<endl;
	}
	
	return 0;
}
