#include<bits/stdc++.h>
using namespace std;
 
long long arr[1000][1000];
 
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    long long rowMax = 0;
    for (int i = 0; i < n; i++) {
        long long sum[2];
        sum[0] = 0;
        sum[1] = 0;
        for (int j = 0; j < n; j++) {
            sum[j % 2] += arr[i][j];
        }
        rowMax += max(sum[0], sum[1]);
    }
    long long colMax = 0;
    for (int i = 0; i < n; i++) {
        long long sum[2];
        sum[0] = 0;
        sum[1] = 0;
        for (int j = 0; j < n; j++) {
            sum[j % 2] += arr[j][i];
        }
        colMax += max(sum[0], sum[1]);
    }
    cout << max(colMax, rowMax) << endl;
    return 0;
}