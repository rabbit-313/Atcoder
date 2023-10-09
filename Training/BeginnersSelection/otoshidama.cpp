#include <iostream>
#include <vector>
using namespace std;

const long long yukichi = 10000;
const long long higuchi = 5000;
const long long noguchi = 1000;

const string lie = "-1 -1 -1";
int main(){
    long long N;
    long long Y;
    cin >> N >> Y;
    
    for(long long i=0; i<=N; i++){
        for(long long j=0; j<=N-i; j++){
            long long left_money = Y - yukichi*i - higuchi*j;
            long long noguchi_num = left_money / noguchi;
            if(left_money >= 0 && noguchi_num + i + j == N ){
                cout << i << " " << j << " "<< noguchi_num << endl;
                return 0;
            }
        }
    }
    cout << lie << endl;
}
