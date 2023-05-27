#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector <vector<int> > A(M, vector<int>(N));

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> A.at(i).at(j);
        }
    }

    vector<vector<int> > G(N);
    // 隣接行列だとMLEになってしまう.TLEではない
    // 隣接リスト
    int P[2] = {-1, 1};
	for(int i = 0; i<N; i++) {
        for(int j=0; j<M; j++){
            for(int k=0; k<N; k++){
                if(A.at(j).at(k) == i+1){
                    for(int m=0; m<2; m++){
                        if(k+P[m] < 0 || k+P[m] >= N){
                            continue;
                        }

                        int t = A.at(j).at(k+P[m]);
                        if(find(G.at(i).begin(), G.at(i).end(), t) ==  G.at(i).end()){
                            G.at(i).push_back(t);
                        }
                    }
                }
            }
        }
	}

    // for(int i=0; i<N; i++){
    //     for(int j=0; j < G.at(i).size(); j++){
    //         cout << G.at(i).at(j);
    //     }
    //     cout << "" << endl;
    // }
    int funaka=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i == j){
                continue;
            }
            if(find(G.at(i).begin(), G.at(i).end(), j+1) ==  G.at(i).end()){
                funaka++;
            }
        }
    }
    cout << funaka / 2 << endl;
}