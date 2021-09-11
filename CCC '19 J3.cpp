#include <iostream>
using namespace std;

int main()
{
    int L;
    cin>>L;
    for(int i=0; i<L; i++){
        string input;
        cin>>input;
        char a = input[0];
        string output = "";
        int num = 0;
        for(int j = 0; j<input.length()+1; j++){
            char b = input[j];
            if (b != a){
                output += to_string(num)+" "+a+" ";
                a = input[j];
                num = 1;
            }else{
                num++;
            }
        }
        cout<<output<<endl;
        
    }
    return 0;
}

