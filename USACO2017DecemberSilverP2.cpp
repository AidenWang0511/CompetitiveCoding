#include <bits/stdc++.h>
using namespace std;

struct Record
{
    int day;
    int cow;
    int delta;
};

Record A[100001];

bool cmp(const Record &a, const Record &b)
{
    return a.day < b.day;
}

int main()
{
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, G;
    cin >> N >> G;

    for (int i=0; i<N; i++)
    {
        cin >> A[i].day >> A[i].cow >> A[i].delta;
    }
    sort(A, A+N, cmp);

    // key：牛的编号  value: 对应的牛产奶变化量
    map<int, int> everyCow; 
    // key：总的产奶变化量  value 对应的牛的头数 
    map<int, int, greater<int> > totalChange;  // 按总的产奶变化量降序排列，在Java中可以使用TreeMap
    // 请注意，农夫约翰有一大群奶牛。
    // 所以尽管日志中记录了一些奶牛改变了产奶量，
    // 但仍然还有很多奶牛的产奶量保持在G加仑。
    totalChange[0] = N+1;

    int result = 0;
    for (int i=0; i<N; i++)
    {
    	// 检查在变化之前，当前这头牛是否是冠军，以及和这头牛产奶量一样的牛的数量 
        // TODO
        int milk = everyCow[A[i].cow];
        bool wasMax = (milk == totalChange.begin() -> first);
        int wasCnt = totalChange[milk];

        everyCow[A[i].cow] += A[i].delta;
        if(totalChange[milk] > 1){
            totalChange[milk]--;
        }else{
            totalChange.erase(milk);
        }
        totalChange[everyCow[A[i].cow]]++;

        milk = everyCow[A[i].cow];
        bool isMax = (milk == totalChange.begin() -> first);
        int isCnt = totalChange[milk];

        if(isMax != wasMax){
            result++;
        }else if(isMax && wasMax && isCnt != wasCnt){
            result++;
        }
    }
    cout << result << endl;

    return 0;
}
