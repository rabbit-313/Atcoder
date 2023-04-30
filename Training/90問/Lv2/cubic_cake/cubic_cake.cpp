#include <iostream>
#include <vector>
using namespace std;

// 間違いコード
// long long gcd(long long A, long long B){
//     long long G;
//     if (A < B){
//         int t = A;
//         A = B;
//         B = t;
//     }
//     if ((A%B) == 0){
//         G = B;
//     }
//     else{
//         gcd(B, (A%B));
//     }
    //１回目の再帰でGが出てきてしまう！！
//     return G;
// }
long long gcd(long long A, long long B){
    if (A < B){
        long long t = A;
        A = B;
        B = t;
    }
    if ((A%B) == 0){
        return B;
    }
    else{
        return gcd(B, (A%B));
    }
}

int main(){
    long long A, B, C;
    cin >> A >> B >> C;

    long long G = gcd(gcd(A, B), C);

    cout << (A / G - 1LL) + (B / G - 1LL) + (C / G - 1LL) << endl;
    
}