#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int R, C;
    cin >> R >> C;

    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;

    int maze[R][C];
    int dist[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> maze[i][j];
            dist[i][j] = -1;
        }
    }

    vector<vector<int>> G(100000);
            



    queue<pair<int, int>> Q;
    
    Q.push(make_pair(sx, sy));
    dist[sx][sy] = 0;
    while(!Q.empty()){
        pair<int, int> pos = Q.front();
        Q.pop();

        for(int i=0; i<)
    }
    


}
