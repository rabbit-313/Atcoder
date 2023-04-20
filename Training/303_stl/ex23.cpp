#include <iostream>
#include <vector>
#include <map>


using namespace std;

int main(){
    long long N;
    map<long long, long long> p;

    cin >> N;
    vector <long long> A(N);

    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    for (int i=0; i<N ;i++){
        if(p.count(A.at(i))){
            p.at(A.at(i)) += 1; 
        }
        else{
            p[A.at(i)] = 1;
        }
    }

    long long max = -1;
    long long key, value, max_key;
    for (pair<long long, long long> a: p){
        key = a.first;
        value = a.second;
        if (value > max){
            max = value;
            max_key = key;
        }
    }
    cout << max_key << " " << max << endl;

}