#include <bits/stdc++.h>
using namespace std;

int test = 10;
int N;
string S;

void check(){
    while (test--) {
        cin>>N;
        set<string> mySet;
        for (int i=0; i<N; i++) {
            cin >> S;
            string s = "";
            for (auto j : S) s += tolower(j);
            int index = s.find('@'), index1;
            string sss = "";
            if (index != string::npos) {
                for (int j=0; j<index; j++) {
                    if (s[j] == '.'){
                    	
					}else{
						sss += s[j];
					}
                }
                for(int j=index; j<s.size(); j++) sss += s[j];
            }
            string q = "", q1 = "", ans = "";
            index = sss.find('@'), index1 = sss.find('+');
            if (index1 != string::npos) {
                if (index1 == 1) q = sss[0];
                else q = sss.substr(0, index1);
                if (index != string::npos) q1 = sss.substr(index);
                ans = q + q1;
            }
            else ans = sss;
            mySet.insert(ans);
        }
        cout<<mySet.size()<<endl;
    }
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    check();
    return 0;
}
