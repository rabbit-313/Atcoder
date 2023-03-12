#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    long long count=0;

    for (int i=0; i<S.length(); i++){
        if (S[i] == 'v'){
            count++;
        }
        else if (S[i] == 'w'){
            count += 2;
        }
    }

    cout << count << endl;
}