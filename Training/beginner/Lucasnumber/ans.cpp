#include <iostream>
#include <vector>
using namespace std;

int N;

// &は参照
// 呼び出す側の変数を書き換えることができる
long long luka(int N, vector<long long> &memo){
    if (memo[N] != -1) {
        return memo[N];
    }
    if (N==0) {
        memo[N] = 2;
    }
    else if (N==1){
        memo[N] = 1;
    }
    else {
        memo[N] = luka(N-1, memo) + luka(N-2, memo);
    }
    return memo[N];
}

int main(){
    cin >> N;
    // memo配列はN+1の要素数で初期値が-1
    vector<long long> memo(N+1, -1);
    cout << luka(N, memo) << endl;
    return 0;
}
