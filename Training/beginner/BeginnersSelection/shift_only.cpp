#include <iostream>
#include <vector>
using namespace std;

bool is_even(vector<long long> A){
    int flag = 0;
    for(int i=0; i<A.size(); i++){
       if ( A.at(i) % 2 == 1){
        flag = 1;
        break;
       } 
    }
    if (flag == 0){
        return true;
    }
    else{
        return false;
    }
}

void devide_by_two(vector<long long> &A){
    for(int i=0; i<A.size(); i++){
        A.at(i) = A.at(i) / 2;
    }
}



int main(){
    long long N;
    cin >> N;

    vector <long long> A(N);

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    int count = 0;
    while(is_even(A)){
        devide_by_two(A);
        count++;
    }

    cout << count << endl;

    
}
