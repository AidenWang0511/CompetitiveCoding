#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    set<int>::iterator iter;
    for(int i = 1 ; i <= 5; ++i)
    {
        s.insert(i);
    }

    for(iter = s.begin(); iter != s.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    return 0;
}

