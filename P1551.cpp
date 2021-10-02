#include <bits/stdc++.h>
using namespace std;
int n,m,p;
int f[5001];

//todo
int findP(int x){
    if(f[x] == x){
        return x;
    }
    return findP(f[x]);
}

void merge(int u, int v){
    int fu = findP(u);
    int fv = findP(v);
    if(fu != fv){
        f[fv] = f[fu];
    }
}


int main() 
{
    cin>>n>>m>>p;
	
    for(int i=1; i<=n; i++){
        f[i] = i;
    }

	for(int i=1;i<=m;i++)
    {
    	int a,b;
		cin>>a>>b;
		merge(a,b);
	}
    
    for(int i=1;i<=p;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	if(findP(a) == findP(b))
    	{
    		cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}

	return 0;
}
