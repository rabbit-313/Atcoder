#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;


double time(int n, long long A, long long B){
    double T;
    T = A / sqrt(1 + n) + B * n;
    return T;
}

int main(){
    long long A, B;
    cin >> A >> B;
    double min = A;
    for(int i=0; i<100000000; i++){
        if (time(i, A, B) < min){
            min = time(i, A, B);
        }
        if (time(i+1, A, B) > min){
            break;
        }
    }

    cout << fixed << setprecision(10);
    cout << min << endl;
}
