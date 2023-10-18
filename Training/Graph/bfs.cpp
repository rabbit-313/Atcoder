#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
vector<int> A(1000), B(1000);
int dist[1000];
vector<vector<int>> G(10000);
queue<int> Q;

int main(){
    cin >> N >> M;
    for(int i=1; i<=M; i++){
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for(int i=1; i<=N; i++) dist[i] = -1;

    Q.push(1);
    dist[1] = 0;

    while(!Q.empty()){
        int pos = Q.front();
        Q.pop();
        for(int i=0; i<G[pos].size(); i++){
            int to = G[pos][i];
            if(dist[to] == -1){
                dist[to] = dist[pos]+1;
                Q.push(to);
            }
        }
    }

    for(int i=1; i<=N; i++){
        cout << dist[i] << endl;
    }
   
    
}
