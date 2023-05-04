#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N, P, Q;
    cin >> N >> P >> Q;

    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    long long sum=0;
    for(int i=0; i<=N-5; i++){
        for(int j=i+1; j<=N-4; j++){
            for(int k=j+1; k<=N-3; k++){
                for(int m=k+1; m<=N-2; m++){
                    for(int l=m+1; l<=N-1; l++){
                        if(A.at(i) * A.at(j) % P * A.at(k) % P * A.at(m) % P * A.at(l) % P == Q){
                            sum++;
                        }
                    }
                }
            }
        }
    }

    cout << sum << endl;
}