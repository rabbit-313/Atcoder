#include <iostream>
#include <vector>
using namespace std;

// 惜しい
int main(){
    long long N;
    cin >> N;
    vector <long long> A(N);
    vector <long long> B(N);
    vector <long long> C(N);

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> B.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> C.at(i);
    }

    vector<long long> a(46), b(46), c(46);
    for(int i=0; i<N; i++){
        a.at(A.at(i) % 46)++;
        b.at(B.at(i) % 46)++;
        c.at(C.at(i) % 46)++;
    }

    long long sum = 0;
    for(int i=0; i<46; i++){
        for(int j=0; j<46; j++){
            for(int k=0; k<46; k++){
                if((i+j+k) % 46 == 0){
                    sum += a.at(i) * b.at(j) * c.at(k);
                }
            }
        }
    }

    cout << sum << endl;
}