#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int N;
    long long K;
    cin >> N >> K;
    vector<long long> A(N);
    vector<long long> B(N);

    long long diff_sum=0;
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> B.at(i);
    }
    for(int i=0; i<N; i++){
        diff_sum += abs(A.at(i) - B.at(i));
    }

    if((K - diff_sum) < 0){
        cout << "No" << endl;
    }
    else if((K - diff_sum) % 2 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}