#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,T;
	vector<pair<string,int>> arr;
	cin>>N;
	cin>>T;
	for(int i=0; i<N; i++){
		string a;
		int b;
		cin>>a;
		cin>>b;
		arr.push_back(make_pair(a,b));
	}
	sort(arr.begin(), arr.end());
	for(int i=0; i<arr.size(); i++){
		for(int j=i+1; j<arr.size(); j++){
			for(int k=j+1; k<arr.size(); k++){
				if(arr[i].second+arr[j].second + arr[k].second <=T){
					cout<<arr[i].first<<' '<<arr[j].first<<' '<<arr[k].first<<endl;
				}
			}
		}
	}
	return 0;
}

