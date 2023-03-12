#include <iostream>
#include <vector>
using namespace std;

long long main(){
    string S;
    long long flag = -1;
    cin >> S;

    for (long long i=0; i<S.size(); i++){
        if (S[i] == 'a'){
            flag = i+1;
        }
    }

    cout << flag << endl;
}