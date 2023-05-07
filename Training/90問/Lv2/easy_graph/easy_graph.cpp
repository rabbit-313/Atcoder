#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    vector<int> b(M);
    vector<vector<int> > matrix(N, vector<int>(N));

    for(int i=0; i<M; i++){
        cin >> a.at(i) >> b.at(i);
    }

    for(int i=0; i<M; i++){
        matrix.at(a.at(i)-1).at(b.at(i)-1) = 1;
        matrix.at(b.at(i)-1).at(a.at(i)-1) = 1;
    }
    
    int m_sum=0;
    int count=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            if(matrix.at(i).at(j) == 1){
                m_sum++;
            }
        }
        if(m_sum==1){
            count++;
        }
        m_sum=0;
    }
    cout << count << endl;
}