#include <iostream>
#include <vector>
using namespace std;

int calculateDigitSum(int number) {
    int sum = 0;

    // 各桁の数字を取得して合計を計算
    while (number != 0) {
        sum += number % 10;  // 最後の桁の数字を取得して合計に加える
        number /= 10;  // 最後の桁を取り除く
    }

    return sum;
}


bool is_num_btw_AB(int i, long long A, long long B){
    long long i_sum = calculateDigitSum(i);
    // printf("i_sum:%lld", i_sum);

    if (A <= i_sum && i_sum <= B){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    long long N, A, B;
    cin >> N >> A >> B;

    long long sum=0;
    for(int i=1; i<=N; i++){
        if (is_num_btw_AB(i, A, B)){
            sum += i;
        }
    }

    cout << sum << endl;
}
