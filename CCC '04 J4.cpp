#include <bits/stdc++.h>
using namespace std;
int main (){
    string a,b;
	getline(cin,a);
	getline(cin,b);
    for(int i=0; i<b.size(); i++){
        a+=a;
        if(a.size()>b.size())	break;
    }
    int j=0;
    for(int i=0; i<b.size(); i++){
        int c=a[j];
        c-=65;
        int d=b[i];
        if(d>=65 && d<=90){
            d+=c;
            if(d>90)	d=d-26;
            b[i]=d;
            cout<<b[i];
            j++;
        }
    }
    cout<<endl;
    return 0;
}
