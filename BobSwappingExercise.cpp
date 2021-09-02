#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100002;
int N,Q, arr[MAXN];
string input;
vector<char> color[MAXN];

bool findColor(char a, int index){
    for(auto x: color[index]){
        if(x == a)  return true;
    }
    return false;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>Q;
    cin>>input;
    
    for(int j=0; j<N; j++){
        char cur = input[j];
        for(int i=j; i<N; i++){
            if(input[i]>=cur && !findColor(cur, i)){
                arr[i]++;
                color[i].push_back(cur);
            }else{
                break;
            }
        }
    }
    int a,b;
    for(int i=0; i<Q; i++){
        int ans1 = 0, ans2 = 0;
        cin>>a>>b;
        if(a==0 && b==N-1){
            cout<<0<<endl;
        }else{
            for(int j=0; j<a-1; j++){
                char cur = input[j];
                for(int i=j; i<a-1; i++){
                    if(input[i]>=cur && !findColor(cur, i)){
                        arr[i]++;
                        color[i].push_back(cur);
                    }else{
                        break;
                    }
                }
            }
            for(int j=b; j<N; j++){
                char cur = input[j];
                for(int i=j; i<N; i++){
                    if(input[i]>=cur && !findColor(cur, i)){
                        arr[i]++;
                        color[i].push_back(cur);
                    }else{
                        break;
                    }
                }
            }
            for(int i=0; i<a-1; i++){
                ans1 = max(ans1, arr[i]);
                color[i].clear();
            }
            for(int i=b; i<N; i++){
                ans2 = max(ans2, arr[i]);
                color[i].clear();
            }
            cout<<ans1+ans2<<endl;
            //memset(arr, 0, sizeof(arr));
        }
    }
    
    return 0;
}