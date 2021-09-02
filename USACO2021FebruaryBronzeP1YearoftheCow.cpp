#include <bits/stdc++.h>
using namespace std;

map<string, int> m,z;
map<string, string>mp;
int N;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    z["Rat"] = 1;
    z["Ox"] = 2;
    z["Tiger"] = 3;
    z["Rabbit"] = 4;
    z["Dragon"] = 5;
    z["Snake"] = 6;
    z["Horse"] = 7;
    z["Goat"] = 8;
    z["Monkey"] = 9;
    z["Rooster"] = 10;
    z["Dog"] = 11;
    z["Pig"] = 12;
    m["Bessie"] = 2 + 101*12;
    mp["Bessie"] = "Ox";
    cin>>N;
    for(int i=0; i<N; i++){
        string a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;//a,d,e,h;
        int zodiacFirst = z.find(e)->second;
            string z1 = mp.find(h)->second;
            int zodiacLast = z.find(z1)->second;
            int z2 = m.find(h)->second;
            mp[a] = e;
        if(d == "previous"){
            if(zodiacLast > zodiacFirst){
                m[a] = z2 - abs(zodiacFirst-zodiacLast);
            }else{
                m[a] = z2 + abs(zodiacFirst-zodiacLast) - 12;
            }
        }else{
            if(zodiacLast < zodiacFirst){
                m[a] = z2 + abs(zodiacFirst-zodiacLast);
            }else{
                m[a] = z2 - abs(zodiacFirst-zodiacLast) + 12;
            }
        }
    }
    int e = m.find("Elsie")->second, b = m.find("Bessie")->second;
    int ans = abs(e-b);
    cout<<ans<<endl;



    return 0;
}