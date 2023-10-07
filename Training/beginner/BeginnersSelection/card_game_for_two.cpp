#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareDescending(int a, int b) {
    return a > b;  // 大きい値から小さい値の順に並べる
}

int main(){
    int N;
    cin >> N;

    vector <int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    sort(A.begin(), A.end(), compareDescending);

    int alice=0;
    int bob=0;

    for(int i=0; i<N; i++){
        if (i % 2 == 0){
            alice += A.at(i);
        }
        else{
            bob += A.at(i);
        }
    }

    cout << alice - bob << endl;



}
