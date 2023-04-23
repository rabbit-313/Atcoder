#include <iostream>
using namespace std;

int N;

long long luka(int N){
    int l_0 = 2;
    int l_1 = 1;
    long long L;

    if (N==0) {
        L = l_0;
    }
    else if (N==1){
        L = l_1;
    }
    else {
        L = luka(N-1) + luka(N-2);
    }
    return L;
}

int main(){
    
    cin >> N;
    cout << luka(N) << endl;
    return 0;
}

