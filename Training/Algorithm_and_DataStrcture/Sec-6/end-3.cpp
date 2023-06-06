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
        auto iter_b = lower_bound(B.begin(), B.end(), A.at(i));
        int val_b = *iter_b;

        auto iter_c = lower_bound(C.begin(), C.end(), val_b);

        int val_c = *iter_c;

        if(val_c != 0){
            sum++;
        }
    }
    cout << sum << endl;

}