#include <iostream>
#include <vector>
using namespace std;





int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int> > A(H, vector<int>(W));
    vector<vector<int> > B(H, vector<int>(W));
    

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A.at(i).at(j);
        }
    }

      // O(HW(H+W)+1)の計算量となりTLE !!!!
      // Atcoder大変だなあ〜
      for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            
            for(int k=0; k<W; k++){
                int l = k+j;
                if (k+j > W-1){
                    l = k+j - W;
                }

                B.at(i).at(j) += A.at(i).at(l);
            }
            for(int k=0; k<H; k++){
                int m = k+i;
                if (k+i > H-1){
                    m = k+i - H;
                }

                B.at(i).at(j) += A.at(m).at(j);
            }
            B.at(i).at(j) -= A.at(i).at(j);

        }
    }

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cout << B.at(i).at(j) << " ";
        }
        cout << "" << endl;
    }


}