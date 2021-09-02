#include <bits/stdc++.h>
using namespace std;

string s;
int Q, a, b;
char c;
int psa[27][1000001];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    getline(cin, s);
    cin>>Q;
    memset(psa, 0, sizeof(psa));
    for (int i=0; i<s.size(); i++) {
        if (s[i] != ' '){
            psa[s[i] - 'a'][i]++;
        }
    }
    for (int i=0; i<26; i++) {
        for (int j=1; j<s.size(); j++) {
            psa[i][j] += psa[i][j - 1];
        }
    }
    for(int i=0; i<Q; i++){
        cin>>a>>b>>c;
        a--; b--;
        cout<<psa[c - 'a'][b] - psa[c - 'a'][a - 1]<<endl;
    }
    return 0;
}