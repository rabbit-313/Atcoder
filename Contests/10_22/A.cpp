#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    long long A;
    long long B;
    long long C;
    cin >> A >> B;
    B = B * 10*10*10*10;
    C = B / A;
    if (C%10 <= 4){
        C -= C%10;
        //C = (double)C / (10*10*10*10);
        cout << fixed << setprecision(3) << (double)C / (10*10*10*10) << endl;
      
    }
    else {
        C -= C%10;
        C /= 10;
        C++;
        cout << fixed << setprecision(3) << (double)C / (10*10*10) << endl;
        
    }

}