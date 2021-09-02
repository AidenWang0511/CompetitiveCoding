#include<bits/stdc++.h>
using namespace std;

string a,b, c="abcdefghijklmnopqrstuvwxyz";
int N,K, arrA[26];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>K>>a;
    for(int i=0; i<N; i++){
        int index = a[i] - 'a';
        arrA[index]++;
    }
    int minFreq = INT_MAX, nonMinF = 0;
    int minLetter;
    for(int i=0; i<26; i++){
        if(minFreq>arrA[i]){
            minFreq = arrA[i];
            minLetter = i;
        }
    }
    if(K<minFreq || K>N){
        cout<<"WRONGANSWER"<<endl;
    }else{
        K-=minFreq;
        for(int i=0; i<N; i++){
            if(K>nonMinF){
                b+=a[i];
                if(a[i] - 'a' != minLetter){
                    nonMinF++;
                }
            }else{
                b+=c[minLetter];
            }
        }
        cout<<b<<endl;
    }

    return 0;
}