#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    vector<long long> T(Q);
    vector<long long> X(Q);
    vector<long long> Y(Q);

    for(int i=0; i<Q; i++){
        cin >> T.at(i) >> X.at(i) >> Y.at(i);
    }

    long long shift=0;
    for(long long i=0; i<Q; i++){
        if(T.at(i) == 1){
            long long s = shift%N;
            long long tmp;
            tmp = A.at((X.at(i)-1+N-s)%N);
            A.at((X.at(i)-1+N-s)%N) = A.at((Y.at(i)-1+N-s)%N);
            A.at((Y.at(i)-1+N-s)%N) = tmp;
        }else if(T.at(i) == 2){ //見かけの処理を考えよう
            // rotate(A.rbegin(), A.rbegin()+1, A.rend()); TLE
            shift++;
        }else{
            long long s = shift%N;
            cout << A.at((X.at(i)-1+N-s)%N) << endl;
        }
    }
}