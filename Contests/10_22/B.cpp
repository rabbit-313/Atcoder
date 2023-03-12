#include <iostream>
#include <vector>
using namespace std;

long long main(){
    long long H;
    long long W;
    cin >> H >> W;
    char a[H][W];
    long long b[W];
    for (long long i=0; i<H; i++){
        for (long long j=0; j<W; j++){
            cin >> a[i][j];
        }
    }

    long long count = 0;
    for(long long j=0; j<W; j++){
        count = 0;
        for(long long i=0; i<H; i++){
            if(a[i][j] == '#'){
                count++;
            }
        }
        b[j] = count;
    }
    for(long long j=0; j<W; j++){
        prlong longf("%d ", b[j]);
        prlong longf("\n");
    }
}