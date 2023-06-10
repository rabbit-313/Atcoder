#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int a = N%10;

    int ans=0;
    if(a <= 2){
        ans = N - a;
    }else if(a <= 7){
        ans = N - a + 5;
    }else{
        ans = N - a + 10;
    }
    cout << ans << endl;
}