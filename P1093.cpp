#include<bits/stdc++.h>
using namespace std;

struct stu{
    int sum;
    int chi;
    int num;

};

vector<stu> v;
int n;

bool cmp(stu a, stu b){
    if(a.sum > b.sum){
        return true;
    }else if(a.sum == b.sum){
        if(a.chi > b.chi){
            return true;
        }else if(a.chi == b.chi){
            return a.num<b.num;
        }else{
            return false;
        }
    }else{
        return false;
    }
    
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++){
        v.push_back(stu());
        int a,b,c;
        cin>>a>>b>>c;
        v[i-1].sum = a+b+c;
        v[i-1].chi = a;
        v[i-1].num = i;
    }
    sort(v.begin(), v.end(),cmp);
    for(int i=0; i<5; i++){
        cout<<v[i].num<<' '<<v[i].sum<<endl;
    }
    return 0;
}
