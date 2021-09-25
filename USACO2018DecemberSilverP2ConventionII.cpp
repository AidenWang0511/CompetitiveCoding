#include<bits/stdc++.h>
using namespace std;

struct Cow
{
	int a;//senior
    int b;//time
    int c;//length
};

struct Scmp
{
	bool operator()(Cow x,Cow y) 
	{
	 	return x.a < y.a; 
	}
};

struct Tcmp
{
	bool operator()(Cow x,Cow y) 
	{
        if(x.b == y.b){
            return x.a < y.a;
        }
	 	return x.b < y.b; 
	}
};

priority_queue<Cow,vector<Cow>,Scmp> pq2; 

priority_queue<Cow,vector<Cow>,Tcmp> pq1; 


int main(){
    // freopen("perimeter.in","r",stdin);
	// freopen("perimeter.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    int N; 
    cin>>N;
    int maxC = 0;
    for(int i=0; i<N; i++){
        int a,b,c;
        cin>>a>>b>>c;
        pq1.push({a,b,c});
    }
    pq2.push(pq1.top());
    int ans = 0, curT = 0;
    pq1.pop();

    Cow cur = pq2.top();
    curT = cur.b;
    pq2.pop();
    while(!pq2.empty() || !pq1.empty()){
        if(curT){
            pq2.push(pq1.top());
        }{

        }
        if()
    }


    return 0;
}
