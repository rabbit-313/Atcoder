#include <iostream>
#include <vector>
using namespace std;


// TLE
int main(){
    long long N;
    cin >> N;

    vector<string> S(N);
    vector<string> Name;
    vector<long long> No;

    for(int i=0; i<N; i++){
        cin >> S.at(i);
    }

    int flag=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<Name.size(); j++){
            if(S.at(i) == Name.at(j)){
                flag = 1;
            }
        }
        if (flag == 0){
            Name.push_back(S.at(i));
            No.push_back(i+1);
        }
        flag = 0;
    }

    for(int elem : No){
        cout << elem << endl;
    }

}