#include <iostream>
using namespace std;

unsigned long long kaijou(int N){
    if(N==0){
        return 1;
    }
    else{
        return N * kaijou(N-1);
    }
}


int main(){
    unsigned long long K;
    cin >> K;
    int n=0;
    unsigned long long kai;

    if (K >= 5 && (K%6 == 1 || K%6 == 5)){
        cout << K << endl;
    }
    else{
        while(true){
            kai = kaijou(n);
            if (kai % K == 0){
                cout << n << endl;
                break;
            }
            else{
                n++;
            }
        }
    }
}