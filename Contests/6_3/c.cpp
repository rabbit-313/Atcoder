#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, D;
    cin >> N >> D;
    vector <int> X(N), Y(N);

    for(int i=0; i<N; i++){
        cin >> X.at(i) >> Y.at(i);
    }

    vector <vector<double> > A(N, vector<double>(N));

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i == j){
                A.at(i).at(j) = 0;
            }

            double x_diff = X.at(i) - X.at(j);
            double y_diff = Y.at(i) - Y.at(j);
            double x_pow = pow(x_diff, 2);
            double y_pow = pow(y_diff, 2);
            A.at(i).at(j) = (double)sqrt(x_pow + y_pow);
        }
    }

    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         cout << A.at(i).at(j);
    //     }
    //     cout << endl;
    // }

    vector <int> flag(N);
    vector <vector<int> > A_inf(N, vector<int>(N));
    flag.at(0) = 1;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(A.at(i).at(j) <= D && flag.at(i) == 1){
                A_inf.at(i).at(j) = 1;
                flag.at(j) = 1;
            }else if(flag.at(j) == 1 && A.at(i).at(j) <= D){
                    A_inf.at(i).at(j) = 1;
            }else{
                A_inf.at(i).at(j) = 0;
            }
        }
    }

    int inf_or_not = 0;
    for(int i=0; i<N; i++){
        inf_or_not = 0;
        if (i == 0){
            cout << "Yes" << endl;
            continue;
        }
        for(int j=0; j<i; j++){
            inf_or_not += A_inf.at(j).at(i);
        }
        if(inf_or_not == 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }


}