#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector <int> D(N);

    for(int i=0; i<N; i++){
        cin >> D.at(i);
    }

    sort(D.begin(), D.end());

    int pre_value;
    int next_value;
    int count = 1;
    for(int i=0; i<N-1; i++){
        pre_value = D.at(i);
        next_value = D.at(i+1);
        if (pre_value != next_value){
            count++;
        }
    }

    cout << count << endl;


}
