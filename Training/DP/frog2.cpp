#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    const long long INF=100000000000;
    vector<long long> h(N);

    for(int i=0; i<N; i++) cin >> h.at(i);

    vector <long long> dp(N);

    for(int i=0; i<N; i++){
        dp[i] = INF;
    }
    dp[0] = 0;
    dp[1] = abs(h.at(1) - h.at(0));
    
    for(int i=2; i<N; i++){
        long long min = INF;
        for(int j=1; j<=K; j++){
            // cout << dp[i-j] + abs(h.at(i) - h.at(i-j)) << " ";
            if(j<=i && (dp[i-j] + abs(h.at(i) - h.at(i-j)) < min)){
                min = dp[i-j] + abs(h.at(i) - h.at(i-j));
            }
        }
        dp[i] = min;
    }

    // for(int i=0; i<N; i++) cout << dp[i];
    cout << dp.at(N-1) << endl;
}