#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N;
    cin >> N;

    vector <long long> A(N), B(N), C(N);

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> B.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> C.at(i);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());


    int sum = 0;
    for(int i=0; i<N; i++){
        long long Aj = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        long long Cj = N - (upper_bound(C.begin(), C.end(), B[i]) - C.begin());
        sum += Aj * Cj;
    }
    cout << sum << endl;

}