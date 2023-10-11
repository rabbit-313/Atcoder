#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N;
    cin >> N;

    vector<long long> T(N), X(N), Y(N);
    for(int i=0; i<N; i++){
        cin >> T.at(i) >> X.at(i) >> Y.at(i);
    }

    long long x=0;
    long long y=0;
    long long t=0;
    long long x_diff, y_diff, t_diff, locate_diff;
    for(int i=0; i<N; i++){
        x_diff = abs(X.at(i) - x);
        y_diff = abs(Y.at(i) - y);
        t_diff = T.at(i) - t;

        locate_diff = x_diff + y_diff;

        if ((t_diff - locate_diff)%2 != 0 || t_diff < locate_diff){
            cout << "No" << endl;
            return 0;
        }

        x = X.at(i);
        y = Y.at(i);
        t = T.at(i);
    }
    cout << "Yes" << endl;
}
