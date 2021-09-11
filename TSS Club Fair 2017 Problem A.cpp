#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N;
string a, b, c;

int main(){
  cin>>N;
  for(int i=0; i<N; i++){
    cin>>a>>b>>c;
    if(a == b)cout<<a<<endl;
    else if (a == c) cout<<a<<endl;
    else if (b == c) cout<<b<<endl;
    else cout<<"???"<<endl;
  }
  return 0;
}
