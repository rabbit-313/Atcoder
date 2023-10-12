#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    vector<long long> A(M), B(M);
    for(int i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }

    for(int i=0;)
    vector<vector<long long>> G(100);

    for(int i=0; i<M; i++){
        G.at(A.at(i)).push_back(B.at(i));
        G.at(B.at(i)).push_back(A.at(i));
    }


    for(int i=0; i<N; i++){
        for(int j=0; j<G.at(i).size(); j++){
            cout << G.at(i).at(j);
        }
        cout << "" << endl;
    }
}
