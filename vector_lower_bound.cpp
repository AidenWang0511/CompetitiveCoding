#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
	v.push_back(2);
	v.push_back(1);
	v.push_back(7);
	v.push_back(5);
	//lower_bound���ҵ�һ�����ڵ���x������λ��,����СֵС����Ҫ��ǰ�ж� 
	int ans=lower_bound(v.begin(),v.end(),8)-v.begin();
	cout<<ans<<endl;
	
}
