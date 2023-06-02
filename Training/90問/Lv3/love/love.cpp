#include <iostream>
#include <vector>
using namespace std;

int count(vector<long long> A, int t){
    int count = 0;
    for(int i=0; i < A.size(); i++){
        if(A.at(i) % 46 == t){
            count++;
        }
    }
    return count;
}


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

    long long sum = 0;
    for(int i=0; i<46; i++){
        for(int j=0; j<46; j++){
            for(int k=0; k<46; k++){
                if((i+j+k) % 46 == 0){
                    sum += count(A, i) * count(B, j) * count(C, k);
                }
            }
        }
    }
    cout << sum << endl;
}