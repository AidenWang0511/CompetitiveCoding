#include<bits/stdc++.h>
using namespace std;

map<string, int> m;

int main() {
	int n;
	cin>>n;
	string name[n];
	for(int i=0;i<n;i++)
	{
		cin>>name[i];
		//todo
        m[name[i]] = 0;
	}
	string sender,receiver;
	for(int i=0;i<n;i++)
	{
		int money,num;
		cin>>sender;
		cin>>money>>num;
		//todo
        if(num == 0) continue;
        int init = money/num;
        init = init*num;
        m[sender] -= init;
        for(int j=0; j<num; j++){
            cin>>receiver;
            m[receiver] += money/num;
        }
	}

    for(int i=0; i<n; i++){
        cout<<name[i]<<" "<<m[name[i]]<<endl;
    }

	
	
    return 0;
} 

