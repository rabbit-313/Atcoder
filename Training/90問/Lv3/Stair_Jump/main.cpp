#include <iostream>
#include <vector>
using namespace std;

//DPを勉強しよう
int main(){
    int N, L;
    cin >> N >> L;

    const long long DIV = 1000000007;

    vector <int> dp(N+1);
    dp.at(0) = 1;

    // for(int i=0; i<dp.size(); i++){
    //     cout << dp.at(i) << endl;
    // }
    
    for(int i=1; i<=N; i++){
        if (i < L) dp.at(i) = dp.at(i-1);
        else dp.at(i) = (dp.at(i-1) + dp.at(i - L)) % DIV;
    }
    cout << dp.at(N) << endl;


}