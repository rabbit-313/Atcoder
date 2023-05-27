#include <iostream>
#include <vector>
using namespace std;

bool niteru(char a, char b){
    if (a == b || (a == '1' && b == 'l') || (a == 'l' && b == '1') || (a == '0' && b == 'o') || (a == 'o' && b == '0')){
        return true;
    }else{
        return false;
    }
}

int main(){
    int N;
    string S, T;
    cin >> N;
    cin >> S;
    cin >> T;

    for(int i=0; i<N; i++){
        if(niteru(S[i], T[i]) == false){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}