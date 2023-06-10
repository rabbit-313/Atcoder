#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long ichi, ju, hyaku, sen, man, juman;
    if(N <= 1000 - 1){
        cout << N << endl;
    }else if(N <= 10000 - 1){
        ichi = N - N%10;
        cout << ichi << endl;
    }else if(N <= 100000 - 1){
        ichi = N - N%10;
        ju = ichi - ichi%100;
        cout << ju << endl;
    }else if(N <= 1000000 - 1){
        ichi = N - N%10;
        ju = ichi - ichi%100;
        hyaku = ju - ju%1000;
        cout << hyaku << endl;
    }else if(N <= 10000000 - 1){
        ichi = N - N%10;
        ju = ichi - ichi%100;
        hyaku = ju - ju%1000;
        sen = hyaku - hyaku%10000;
        cout << sen << endl;
    }else if(N <= 100000000 - 1){
        ichi = N - N%10;
        ju = ichi - ichi%100;
        hyaku = ju - ju%1000;
        sen = hyaku - hyaku%10000;
        man = sen - sen%100000;
        cout << man << endl;
    }else if(N <= 1000000000 - 1){
        ichi = N - N%10;
        ju = ichi - ichi%100;
        hyaku = ju - ju%1000;
        sen = hyaku - hyaku%10000;
        man = sen - sen%100000;
        juman = man - man%1000000;
        cout << juman << endl;
    }
}