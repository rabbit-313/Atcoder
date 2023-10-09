#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int A_value = 500;
    const int B_value = 100;
    const int C_value = 50;

    long long A, B, C, X;
    cin >> A >> B >> C >> X;

    int count=0;
    for(int i=0; i<=A; i++){
        for(int j=0; j<=B; j++){
            long long left_value = X - A_value*i - B_value*j;
            int num_C = left_value / C_value;


            if ((num_C <= C) && (left_value % C_value == 0) && (left_value>=0)){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
