#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(1);
    cout<<"set �� size ֵΪ ��"<<s.size()<<endl;
    cout<<"set ���Ƿ����һ����3 ��"<<s.count(3)<<endl;
//    cout<<"set �еĵ�һ��Ԫ���� ��"<<*s.begin()<<endl;
//    cout<<"set �е����һ��Ԫ����:"<<*s.end()<<endl;
//    s.clear();
    if(s.empty())
    {
        cout<<"set Ϊ�� ������"<<endl;
    }
    cout<<"set �� size ֵΪ ��"<<s.size()<<endl;
//    cout<<"set �� maxsize��ֵΪ ��"<<s.max_size()<<endl;
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
//    cout<<"��һ�����ڵ��� 3 ������ ��"<<*pr.first<<endl;
//     cout<<"��һ������ 3������ �� "<<*pr.second<<endl;
    return 0;
}
