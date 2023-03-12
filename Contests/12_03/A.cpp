#include <iostream>
using namespace std;

int main(){
    int H, W;
    int count=0;
    cin >> H >> W;
    string S[H];
    for (int i=0; i<H; i++){
        cin >> S[i];
    }
    for(int i=0; i < H; i++){
        for(int j=0; j<W; j++){
            if (S[i][j] == '#'){
                count++;
            }
        }
    }
    cout << count << endl;

}