#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    cin >> N;

    vector<long long> h(N);

    for(int i=0; i<N; i++) cin >> h.at(i);

    vector <long long> dp(N);

    dp.at(0) = 0;
    dp.at(1) = abs(h.at(0) - h.at(1));

    for(int i=2; i<N; i++){
        dp[i] = min(dp[i-1] + abs(h.at(i) - h.at(i-1)) , dp[i-2] + abs(h.at(i) - h.at(i-2)));
    }
    cout << dp.at(N-1) << endl;
}