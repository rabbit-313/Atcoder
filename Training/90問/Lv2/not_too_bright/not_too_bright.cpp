#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    long long led_sum;
    // コーナーケースを理解しよう!
    if (H == 1 || W == 1){
        led_sum =  H * W;
    } 
    else if (H % 2 == 0){
        if(W % 2 == 0){
            led_sum = (H / 2) * (W / 2); 
        }
        else{
            led_sum = (H / 2) * (W / 2 + 1); 
        }
    }
    else{
        if(W % 2 == 0){
            led_sum = (H / 2 + 1) * (W / 2); 
        }
        else{
            led_sum = (H / 2 + 1) * (W / 2 + 1); 

        }
    } 
    cout << led_sum << endl;
}