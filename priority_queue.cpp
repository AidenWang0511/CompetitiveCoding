#include <bits/stdc++.h>
using namespace std;

//方式二：（cmp将结构体以val由大到小排列，组成大根堆）一般也用这个！

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
	
	top() 访问队头元素
//	empty() 队列是否为空
	size() 返回队列内元素个数
	push() 插入元素到队尾 (并排序)
	
	pop() 弹出队头元素
	//升序队列，小顶堆
	priority_queue <int,vector<int>,greater<int> > q;
	//降序队列，大顶堆
	priority_queue <int,vector<int>,less<int> >q;
	
	//greater和less是std实现的两个仿函数（就是使一个类的使用看上去像一个函数。其实现就是类中实现一个operator()，这个类就有了类似函数的行为，就是一个仿函数类了）
	
	


	return 0;
}
