#include <bits/stdc++.h>
using namespace std;

//��ʽ������cmp���ṹ����val�ɴ�С���У���ɴ���ѣ�һ��Ҳ�������

struct Node
{
	int adj;
 	int val;
};

struct cmp
{
	bool operator()(Node a,Node b) 
	{
	 	return  a.val > b.val; 
	}
};
priority_queue<Node,vector<Node>,cmp>Q; 

int main() {
	
	top() ���ʶ�ͷԪ��
//	empty() �����Ƿ�Ϊ��
	size() ���ض�����Ԫ�ظ���
	push() ����Ԫ�ص���β (������)
	
	pop() ������ͷԪ��
	//������У�С����
	priority_queue <int,vector<int>,greater<int> > q;
	//������У��󶥶�
	priority_queue <int,vector<int>,less<int> >q;
	
	//greater��less��stdʵ�ֵ������º���������ʹһ�����ʹ�ÿ���ȥ��һ����������ʵ�־�������ʵ��һ��operator()���������������ƺ�������Ϊ������һ���º������ˣ�
	
	


	return 0;
}
