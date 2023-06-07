#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

double func(long long  A, long long B, long long C, double t){
    return A*t + B*sin(C*t*M_PI);
}

int main(){
    long long A, B, C;
    const double INF = 1 << 50;
    double left = 0, right = INF;

    

    while(right - left < 0.00000001){
        double t = (left + right) / 2;

        if (func(A, B, C, t) == 100) left = t;
        else right = t;

    }
    cout << right << endl;
}