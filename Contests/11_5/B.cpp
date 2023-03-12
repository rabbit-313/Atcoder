#include <iostream>
#include <vector>
using namespace std;

long long main(){
    long long N, M;
    cin >> N >> M;
    vector<vector<> > a(M, vector<long long>(2));
    vector<vector<long long> > l(N, vector<long long>(N));
    vector<long long> count(N, 0);

    for (long long i=0; i<M; i++){
        for (long long j=0; j<2; j++){
            cin >> a[i][j];
        }
    }
    for (long long i=0; i<M; i++){
        for (long long j=0; j<2; j++){
            if(j==0){
                l[a[i][j]-1][count[a[i][j]-1]] = a[i][j+1];
                count[a[i][j]-1]++;
            }
            else{
                l[a[i][j]-1][count[a[i][j]-1]] = a[i][j-1];
                count[a[i][j]-1]++;
            }
        }
    }

    for(long long i=0; i<N; i++){  
        sort(l[i].begin(), l[i].end());
        cout << count[i];
        for (long long j=0; j<10000; j++){
            if (l[i][j] == 0){
                continue;
            }
            cout << ' ' << l[i][j];
        }
        cout << endl;
    }
}