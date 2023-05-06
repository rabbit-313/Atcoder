#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

long long eight_to_ten(long long N){
    long long ten=0;
    long long r;
    for(long long k=0; N >= 1; k++){
        r = N % 10;
        ten += (r * pow(8, k));
        N /= 10;
    }
    return ten;
}

long long ten_to_nine(long long N){
    long long nine=0;
    long long r;
    for(long long k=0; N >= 9; k++){
        r = N % 9;
        nine += (r * pow(10, k));
        N /= 9;
        if(N < 9){
            nine += (N * pow(10, k+1));
        }
    }
    return nine;
}

long long eight_to_5(long long N){
    long long r;
    long long N_tmp=N;
    for(long long k=0; N_tmp >= 1; k++){
        r = N_tmp % 10;
        if(r == 8){
            N = N - 8 * pow(10, k);
            N = N + 5 * pow(10, k);
        }
        N_tmp /= 10;
    }
    return N;
}

int main(){
    //long longは最大19桁
    long long N, K;
    long long ten, nine, last;
    cin >> N >> K;

    for(int i=0; i<K; i++){
        ten = eight_to_ten(N);
        nine = ten_to_nine(ten);
        last = eight_to_5(nine);
    }

    // cout << ten << endl;
    cout << last << endl;

}