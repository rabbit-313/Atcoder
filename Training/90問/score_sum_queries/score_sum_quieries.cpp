#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int> > cp(N, vector<int>(2));

    for(int i=0; i<N; i++){
        for (int j=0; j<2; j++){
           cin >> cp.at(i).at(j) ;
        }
    }

    int Q;
    cin >> Q;
    vector<vector<int> > lr(Q, vector<int>(2));
    
    for(int i=0; i<Q; i++){
        for (int j=0; j<2; j++){
            cin >> lr.at(i).at(j);
        }
    }

    int one_sum=0;
    int two_sum=0;

    for(int i=0; i<Q; i++){
        for(int j=lr.at(i).at(0)-1; j<=lr.at(i).at(1)-1; j++){
            if (cp.at(j).at(0) == 1){
                one_sum += cp.at(j).at(1);
            }
            else{
                two_sum += cp.at(j).at(1);
            }
        }
        cout << one_sum << " " << two_sum << endl;
        one_sum = 0;
        two_sum = 0;
    }
}