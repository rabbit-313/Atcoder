#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector <string> S;

    string A = "nuke";
    
    vector <int> R(5);
    vector <int> C(5);

    for(int i=0; i<H; i++){
        string input;
        cin >> input;
        S.push_back(input);
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(S.at(i).at(j) == 's'){
                R.at(0) = i+1;
                C.at(0) = j+1;
                for(int k=-1; k<2; k++){
                    for(int l=-1; l<2; l++){
                        if(i+k<0 || i+k>=H || j+l<0 || j+l>= W){
                            continue;
                        }
                        else if(S.at(i+k).at(j+l) == 'n'){
                            R.at(1) = i+k+1;
                            C.at(1) = j+l+1;
                            for(int m=1; m<=3; m++){
                                int row = k;
                                int colum = l;
                                if(i+k + row*m<0 || i+k + row*m>=H || j+l + colum*m<0 || j+l + colum*m>= W){
                                    continue;
                                }
                                else if (S.at(i+k + row*m).at(j+l + colum*m) != A[m]){
                                    break;
                                }
                                else if (S.at(i+k + row*m).at(j+l + colum*m) == A[m]){
                                    R.at(m+1) = i+k + row*m +1;
                                    C.at(m+1) = j+l + colum*m +1;
                                }
                            }
                            if(R.at(4) != 0){
                                for(int i=0; i<5; i++){
                                    cout << R.at(i) << " " << C.at(i) << endl;
                                }
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}