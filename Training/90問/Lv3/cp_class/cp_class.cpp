#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//ソートして二分探索までは合ってる！！
//実装の仕方が違う
long long binary_search(int B, vector<long long> A){
    long long left=0, right=(long long)A.size()-1;
    while(1){
        long long mid = left + (right - left) / 2;
        long long diff = 1 << 18;
        if(A.at(mid) == B || A.at(mid+1) == B){
            return 0;
        }
        else if(abs(A.at(mid)-B) == abs(A.at(mid+1)-B)){
            if(A.at(mid) > B){
                if(abs(A.at(mid)-B) > diff && abs(A.at(mid+1)-B) > diff){
                    return diff;
                }
                diff = abs(A.at(mid)-B);
                right = mid + 1;
            }
            else{
                if(abs(A.at(mid)-B) > diff && abs(A.at(mid+1)-B) > diff){
                    return diff;
                }
                diff = abs(A.at(mid+1)-B);
                left = mid + 1;
            }
        }
        else if(abs(A.at(mid)-B) < abs(A.at(mid+1)-B)){
            if(abs(A.at(mid)-B) > diff && abs(A.at(mid+1)-B) > diff){
                return diff;
            }
            diff = abs(A.at(mid)-B);
            right = mid + 1;
        }
        else{
            if(abs(A.at(mid)-B) > diff && abs(A.at(mid+1)-B) > diff){
                return diff;
            }
            diff = abs(A.at(mid+1)-B);
            left = mid + 1;
        }
    }
}

int main(){
    int N, Q;
    cin >> N;

    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    sort(A.begin(), A.end());
    cin >> Q;
    vector<long long> B(Q);
    for(int i=0; i<Q; i++){
        cin >> B.at(i);
    }
    for(int i=0; i<Q; i++){
        cout << binary_search(B.at(i), A) << endl;
    }

}