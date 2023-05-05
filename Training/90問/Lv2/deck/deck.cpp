#include <iostream>
#include <vector>
using namespace std;


int main(){
    long long Q;
    cin >> Q;
    // 無理に二次元配列にする必要はない
    // vectorT, vectorXを別に用意すればいい
    vector<vector<long long> > TX(Q, vector<long long>(Q));

    //dequeを使うのは配列は良くないらしい
    //メモリをめっちゃ食う
    //なんでだ？？？
    vector<long long> Y;
    
    for(int i=0; i<Q; i++){
        for(int j=0; j<2; j++){
            cin >> TX.at(i).at(j);
        }
    }

    for(int i=0; i<Q; i++){
        if(TX.at(i).at(0) == 1){
            Y.insert(Y.begin(), TX.at(i).at(1));
        }
        else if(TX.at(i).at(0) == 2){
            Y.push_back(TX.at(i).at(1));
        }
        else{
            cout << Y.at(TX.at(i).at(1)-1) << endl;
        }
    }
    // cout << "" <<endl;
    // for(int i=0; i<Y.size(); i++){
    //     cout << Y.at(i) << endl;
    // }
}