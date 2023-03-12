#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long S[N];
    long long A[N];
    for (int i=0; i<N; i++){
        cin >> S[i];
    }
    long long sum=S[0];
    for(int i=0; i<N; i++){
        if (i==0){
            A[i] = S[i];
        }
        else{
            A[i] = S[i] - sum;
            sum += A[i];
        }
    }

    for (int i=0; i<N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}