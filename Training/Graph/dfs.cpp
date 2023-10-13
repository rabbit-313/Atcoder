#include <iostream>
#include <vector>
using namespace std;

bool visited[1000000];
vector<vector<long long>> G(10000);
void dfs(int pos){
    visited[pos] = true;
    for(int i=0; i<G.at(pos).size(); i++){
        int nex=G.at(pos).at(i);
        if(visited[nex] == false) dfs(nex);
    }
    return;
}

int main(){
    long long N, M;
    cin >> N >> M;

    vector<long long> A(M), B(M);
    for(int i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }

    for(int i=0; i<M; i++){
        G.at(A.at(i)).push_back(B.at(i));
        G.at(B.at(i)).push_back(A.at(i));
    }

    for(int i=1; i<=N; i++){
        visited[i] = false;
    }
    dfs(1);
    
    string ans = "OK";
    for(int i = 1; i<=N; i++){
        cout << visited[i] << endl;
        if(visited[i]==false) ans = "No";
    }
    cout << ans << endl;


}
