#include <bits/stdc++.h>
using namespace std;

string a,b,hours, minutes, seconds, check, ans;
int total,num, diff, calcVal, mindiff = 10000000000000000;

int calc (string s){
    return stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(2, 2)) * 60 + stoi(s.substr(4, 2));
}

void time() {
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            for (int k=0; k<num; k++) {
                for (int l=0; l<num; l++) {
                    for (int m=0; m<num; m++) {
                        for (int n=0; n<num; n++) {
                            check = b.substr(i, 1) + b.substr(j, 1) + b.substr(k, 1) + b.substr(l, 1) + b.substr(m, 1) + b.substr(n, 1);
                            calcVal = calc(check);
                            diff = abs(total - calcVal);
                            if (diff < mindiff) {
                                mindiff = diff;
                                ans = check;
                            }
                        }
                    }
                }
            }
        }
    }
}


int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>a;
	cin>>b;
	hours = a.substr(0, 2);
    minutes = a.substr(3, 2);
    seconds = a.substr(6, 2);
    total = stoi(hours) * 3600 + stoi(minutes) * 60 + stoi(seconds);
    num = b.length();
    if (num == 10) {
        cout << a << endl;
        return 0;
    }
    time();
    cout << ans.substr(0, 2) << ':' << ans.substr(2, 2) << ':' << ans.substr(4, 2) << endl;
    return 0;
    
}
