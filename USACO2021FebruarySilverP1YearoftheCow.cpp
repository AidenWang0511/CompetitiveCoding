#include<bits/stdc++.h>
using namespace std;

int N,K,gap[65540], arr[100005];
set<int> s;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>K;
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        a = a/12 + 1;
        s.insert(a);
    }
    int counter = 1;
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        arr[counter] = *it;
        counter++;
    }
    for(int i=1; i<counter; i++){
        gap[i-1] = arr[i] - arr[i-1];
    }
    sort(gap, gap + counter-1);
    int total = 0;
    if(K==1){
        cout<<arr[counter-1] * 12<<endl;
        return 0;
    }

    total += (K-1)*12;
    for(int i=0; i<counter-1 - (K-1); i++){
        total += (gap[i])*12;
    }
    cout<<total<<endl;


    return 0;
}
