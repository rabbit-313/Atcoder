#include <iostream>
#include <vector>
using namespace std;

int H, W;
bool reached[100000][100000];
vector<vector<char>> C;

void dfs(int x, int y){
    if (x<0 || W<=x || y<0 || H<=y || C.at(x).at(y) == '#'){
        return;
    }
    if (reached[x][y]) return;

    reached[x][y] = true;

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}


int main(){
    cin >> H >> W;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> C.at(i).at(j);
            reached[i][j] = false;
        }
    }

    pair<int, int> s_position = findStringInMatrix(C, "s");
    pair<int, int> g_position = findStringInMatrix(C, "g");

    dfs(s_position.first, s_position.second);


    if (reached[g_position.first][g_position.second] == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}
