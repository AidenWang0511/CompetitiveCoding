#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
	v.push_back(2);
	v.push_back(1);
	v.push_back(7);
	v.push_back(5);
	//lower_bound是找第一个大于等于x的数的位置,比最小值小的需要提前判断 
	int ans=lower_bound(v.begin(),v.end(),8)-v.begin();
	cout<<ans<<endl;
	
}
