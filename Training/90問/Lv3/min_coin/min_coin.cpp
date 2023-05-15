#include <iostream>

using namespace std;

int main(){
    long long N, A, B, C;
    int L = 9999;
    long long ans, z;
    cin >> N;
    cin >> A >> B >> C;

    // for(int x=0; x<=L; x++){
    //     for(int y=0; x+y<=L; y++){
    //         for(int z=0; x+y+z<=L; z++){
    //             if(A*x + B*y + C*z == N){
    //                 ans = min(ans, x+y+z);
    //             }
    //         }
    //     }
    // }

    for(int x=0; x<=L; x++){
        for(int y=0; x+y<=L; y++){
            if(N - A*x - B*y >= 0){
                z = (N - A*x - B*y)/C;
            }
            if(A*x + B*y + C*z == N){
                ans = min(ans, x+y+z);
            }
        }
    }
    cout << ans << endl;
}