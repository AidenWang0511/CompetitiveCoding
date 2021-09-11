#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> first8;
int main() {
    cin>>N;
    for (int i = 1; i <= 15; i++) {
        if (i % 3 > 0 && i % 5 > 0) {
            first8.push_back(i);
        }
    }
    cout<<first8[(N - 1) % 8] + 15 * ((N - 1) / 8)<<endl;
    return 0;
}
