#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    vector <int> A(n);
    vector <int> B(n);
    vector <int> C(n);
    vector <int> D(n);

    for(int i=0; i<n; i++){
        cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);
    }
}