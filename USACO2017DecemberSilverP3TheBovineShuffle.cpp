#include<bits/stdc++.h>
using namespace std;
const int MAX_A=100005;
int to[MAX_A];
int inDegree[MAX_A];

int main() {
    freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cin>>to[i];
       	//todo
        inDegree[to[i]]++;
    }

    queue<int> q;
    int cnt = 0;

    for (int i=1; i<=n; i++) {
        //todo
        if(inDegree[i] == 0){
            q.push(i);
            cnt++;
        }
    }

    while(q.size()>0) {
       //todo
       int from = q.front();
       q.pop();
       inDegree[to[from]]--;
       if(inDegree[to[from]] == 0){
           q.push(to[from]);
            cnt++;
       }
    }

    cout<<n-cnt<<endl;


    return 0;
}
