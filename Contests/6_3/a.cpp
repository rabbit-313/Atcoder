#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector <string> S(N);
    vector <int> A(N);

    for(int i=0; i<N; i++){
        cin >> S.at(i) >> A.at(i);
    }

    long long min = 10000000000;
    int index = 0;
    for(int i=0; i<N; i++){
        if(A.at(i) < min){
            min = A.at(i);
            index = i;
        }
    }

    for(int j=index; j<N; j++){
        cout << S.at(j) << endl;
    }
    if (index > 0){
         for(int k=0; k<index; k++){
        cout << S.at(k) << endl;
        }
    }

}