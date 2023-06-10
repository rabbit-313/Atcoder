#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    vector <vector<char> > S(H, vector<char>(W));

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S.at(i).at(j);
        }
    }

    int jouge[2] = {-1, 1};
    int cnt=0;

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cnt = 0;
            if(S.at(i).at(j) == '.'){
                if(i + jouge[0] < 0 || i +jouge[0] >= H){
                    cnt += 0;
                }else if(S.at(i + jouge[0]).at(j) == '#'){ 
                    cnt++;
                }

                if(i + jouge[1] < 0 || i +jouge[1] >= H){
                    cnt += 0;
                }else if(S.at(i + jouge[1]).at(j) == '#'){ 
                    cnt++;
                }

                if(j + jouge[0] < 0 || j +jouge[0] >= W){
                    cnt += 0;
                }else if(S.at(i).at(j+jouge[0]) == '#'){ 
                    cnt++;
                }

                if(j + jouge[1] < 0 || j +jouge[1] >= W){
                    cnt += 0;
                }else if(S.at(i).at(j + jouge[1]) == '#'){ 
                    cnt++;
                }
            }
            if(cnt >= 2){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}