#include <bits/stdc++.h> 
using namespace std;

int main()
{
    string input;
    cin>>input;
    int a = input.length();
    int H=0;
    int V=0;
    for(int i=0; i<a; i++){
        if(input[i] == 'H'){
            H++;
        }else if(input[i] == 'V'){
            V++;
        }else{
            
        }
    }
    if(H % 2 == 0 && V % 2 == 0){
        cout<<"1 2"<<endl;
        cout<<"3 4"<<endl;
    }else if(H % 2 == 0){
        cout<<"2 1"<<endl;
        cout<<"4 3"<<endl;
    }else if(V % 2 == 0){
        cout<<"3 4"<<endl;
        cout<<"1 2"<<endl;
    }else{
        cout<<"4 3"<<endl;
        cout<<"2 1"<<endl;
    }
    return 0;
}
