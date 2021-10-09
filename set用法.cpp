#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(1);
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
    cout<<"set 中是否包含一个数3 ："<<s.count(3)<<endl;
//    cout<<"set 中的第一个元素是 ："<<*s.begin()<<endl;
//    cout<<"set 中的最后一个元素是:"<<*s.end()<<endl;
//    s.clear();
    if(s.empty())
    {
        cout<<"set 为空 ！！！"<<endl;
    }
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
//    cout<<"set 的 maxsize的值为 ："<<s.max_size()<<endl;
//    
//    
    set<int> s;
    set<int>::iterator iter;
    for(int i = 1 ; i <= 5; ++i)
    {
        s.insert(i);
    }
    for(iter = s.begin() ; iter != s.end() ; iter++)
    {
        cout<<*iter<<" ";
    }

    
//    pair<set<int>::const_iterator,set<int>::const_iterator> pr;
//    pr = s.equal_range(3);
//    cout<<"第一个大于等于 3 的数是 ："<<*pr.first<<endl;
//     cout<<"第一个大于 3的数是 ： "<<*pr.second<<endl;
    return 0;
}
