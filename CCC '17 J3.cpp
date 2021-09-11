#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1,x2,y1,y2,a;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>a;
	a-=max(x1,x2)-min(x1,x2);
	a-=max(y1,y2)-min(y1,y2);
	if(a<0) cout<<'N'<<endl;
	else{
		if(a%2 == 0) cout<<'Y'<<endl;
		else cout<<'N'<<endl;
	}

	return 0;
}
