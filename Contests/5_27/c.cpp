#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    vector <long long> X(M);
    vector <long long> Y(M);

    for(int i=0; i<M; i++){
        cin >> X.at(i) >> Y.at(i);
    }

    int T[2] = {0, 0}

    for(int i=0; i<N; i++){
        if(S[i] == 'R'){
            T[0]++;
        }else if(S[i] == 'L'){
            T[0]--;
        }else if(S[i] == 'U'){
            T[1]++;
        }else if(S[i] == 'D'){
            T[1]--;
        }
        H--;

        
    }
}