#include <iostream>
#include <vector>
using namespace std;

long long euclid(long long A, long long B){
    if (A < B){
        long long tmp = A;
        A = B;
        B = tmp; 
    }
    if (B == 0){
        return A;
    }else{
        return euclid(B, A%B);
    }
}

int main(){
    long long A, B;
    cin >> A >> B;

    long long gcd = euclid(A, B);

    long long a = A / gcd;
    long long b = B / gcd;

    long long lcm = a * b * gcd;
    if (lcm > 1000000000000000000){
        cout << "Large" << endl;
    }else{
        cout << lcm << endl;
    }
}