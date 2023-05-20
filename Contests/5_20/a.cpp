#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long A, B;
    cin >> A >> B;
    long long num = A / B;

    if ( A > B * num){
        num++;
    }
    cout << num << endl;
}