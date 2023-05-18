#include <iostream>
#include <math.h>
using namespace std;

// WA
// 浮動小数点は誤差が生じてしまうのでできるだけ整数で処理しよう
int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    double left = log(a) / log(2);
    double right = b * (log(c) / log(2));

    if (left < right){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}