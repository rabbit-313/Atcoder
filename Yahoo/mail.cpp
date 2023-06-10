#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <string> tmp(N);
    for(int i=0; i<N; i++){
        cin >> tmp.at(i);
    }

    int n;
    cin >> n;

    
    for(int i=0; i<n; i++){
        int flag = 0;
        int l;
        cin >> l;

        vector <string> A(l);
        vector <string> B(l);
        for(int g=0; g<l; g++){
            cin >> A.at(g) >> B.at(g);
        }
        for(int j=0; j<l; j++){
            for(int k=0; k<N; k++){
                if(A.at(j) == tmp.at(k)){
                    flag = 1;
                    for(int m=0; m<N; m++){
                        if(m == k){
                            cout << B.at(j) << " ";
                        }
                        cout << tmp.at(m) << " ";
                    }
                    cout << endl;
                    break;
                }
            }
            if (flag == 0){
                cout << "Error: Lack of data" << endl;
            }
        }
    }
}

