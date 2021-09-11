#include <bits/stdc++.h>

using namespace std;

int main() {
    long long T,n,a,b,c;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>n>>a>>b>>c;
        if((a+b+c)<n){
            cout<<-1<<endl;
        }else{
            if(c>=n){
                cout<<0<<' '<<0<<' '<<n<<endl;
            }else{
                long long d=n-c;
                if(b>=d){
                    cout<<0<<' '<<d<<' '<<c<<endl;
                }else{
                    cout<<(d-b)<<' '<<b<<' '<<c<<endl;
                }
            }
        }
    }
    return 0;
}
