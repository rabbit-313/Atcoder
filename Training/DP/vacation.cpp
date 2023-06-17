#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N;
    cin >> N;

    // vector <long long> a(N);
    // vector <long long> b(N);
    // vector <long long> c(N);
    // for(int i=0; i<N; i++){
    //     cin >> a[i] >> b[i]>> c[i];
    // }

    long long a[N+1000][3];
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    long long dp[N+1000][3];

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(j == k) continue;
                if(dp[i+1][j] < dp[i][k] + a[i][j]){
                    dp[i+1][j] = dp[i][k] + a[i][j];
                }
            }
        }
    }

    long long max_2=0;
    for(int i=0; i<3; i++){
        if(max_2 < dp[N][i]){
            max_2 = dp[N][i];
        }
    }
    cout << max_2 << endl;
}