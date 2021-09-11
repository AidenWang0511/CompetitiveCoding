#include <bits/stdc++.h>
using namespace std;

int n, a[100001];
bool cmp2(const int &a, const int &b){
	int aa=a%10,bb=b%10;
	if(aa==bb)return a>b;
    return aa< bb;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>n;
	for(int i=0;i<n;i++)	cin>>a[i];
	sort(a,a+n,cmp2);
	for(int i= 0;i<n;i++)	cout<<a[i]<<" ";
	cout<<endl;
}
