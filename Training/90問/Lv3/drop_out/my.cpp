#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    vector <long long> A(N);
    vector <long long> B(N);

    for(int i=0; i<N; i++){
        cin >> A.at(i) >> B.at(i);
    }

    vector <long long> C(2*N);

    for(int i=0; i<N; i++){
        C.at(2*i) = A.at(i) - B.at(i);
        C.at(2*i+1) = B.at(i);
    }
    sort(C.begin(), C.end());

    // for(int i=0; i<2*N; i++){
    //     cout << C.at(i) << endl;
    // }
    long long sum=0;
    for(int i=0; i<K; i++){
        sum += C.at(2*N - 1 - i);
    }

    cout << sum << endl;
}