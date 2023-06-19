#include <iostream>
#include <vector>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main(){
    long long N, W;
    cin >> N >> W;
    vector <long long> weight(N), v(N);

    for(int i=0; i<N; i++) cin >> weight[i] >> v[i];

    vector<vector<long long>> dp(N+1, vector<long long>(W+1, 0));

    for(int i=0; i<N; i++){
        for(int w = 0; w<=W; w++){
            if(w - weight[i] >= 0){
                chmax(dp[i+1][w], dp[i][w - weight[i]] + v[i]);
            }
            chmax(dp[i+1][w], dp[i][w]);
        }
    }

    cout << dp[N][W] << endl;
}