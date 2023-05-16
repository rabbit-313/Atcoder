#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;


// 天才です
// 数学の問題なら簡単に解けるのになあ
int main(){
    double T, L, X ,Y;
    int Q;
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    vector <long long> E(Q);
    for(int i=0; i<Q; i++){
        cin >> E.at(i);
    }
    double r = L / 2;
    double w, x, y, z, shita;
    double pi = M_PI;
    for(int i=0; i<Q; i++){
        w = (2 * pi) / T;
        x = X;
        y = Y + r*sin(w*E.at(i));
        z = r * (1 - cos(w*E.at(i)));
        shita = asin(z / sqrt( pow(x, 2) + pow(y, 2) + pow(z, 2)));
        cout << setprecision(13) << shita * 180 / pi << endl;
    }
}