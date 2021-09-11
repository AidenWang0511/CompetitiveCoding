#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);	
	int r,g,p,o,m;
	cin>>p;
	cin>>g;
	cin>>r;
	cin>>o;
	cin>>m;
    int sum = 0;
    int min = INT_MAX;
        for (int i =0; i<=m/p; i++) {
            for (int j=0; j<=m/g; j++) {
                for (int k=0; k<=m/r; k++) {
                    for (int l = 0; l<=m/o; l++) {
                        if (i*p+j*g+k*r+l*o==m) {
                            if (min > (i+j+k+l)){
                                min = (i+j+k+l);
                            }
                            cout<<"# of PINK is "<<i<<" # of GREEN is "<<j<<" # of RED is "<<k<<" # of ORANGE is "<<l<<endl;
                            sum++;
                        }
                    }
                }
            }
        }
    cout<<"Total combinations is "<<sum<<"."<<endl;
    cout<<"Minimum number of tickets to print is "<<min<<"."<<endl;
}
