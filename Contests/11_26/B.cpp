#include <iostream>
#include <vector>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    int flag = 0;

    if (S.length() < T.length()){
        cout << "No" << endl;
        return 0;
    }

    for (int i=0; i<S.length(); i++){
        if (S[i] == T[0]){
            flag = 1;
            for (int j=1; j<T.length(); j++){
                if (S[i+j] != T[j]){
                    flag = 0;
                }
            }
            if (flag == 1){
                break;
            }
        }
    }
    if (flag == 1){
        cout << "Yes" << endl;
    }
    else if(flag == 0){
        cout << "No" << endl;
    }
}
