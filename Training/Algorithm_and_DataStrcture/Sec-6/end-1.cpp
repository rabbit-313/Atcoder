#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N;
    cin >> N;

    vector <long long> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    //auto b = a; で行ける
    vector <long long> B(N);
    for (int i=0; i<N; i++){
        B.at(i) = A.at(i);
    }

    sort(B.begin(), B.end());

    /*
    vector <int> res(N);
    for(int i=0; i<N; i++){
        res.at(i) = lower_bound(b.begin(), b.end(), a.at(i)) - b.begin();
    }
    */
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(A.at(i) == B.at(j)){
                cout << i << endl;
            }
        }
    }
    
}