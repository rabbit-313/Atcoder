#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, P;
    string S;

    cin >> N;
    pair<pair<string,int>,int> p[N]; //タプルとその番号ラベルのペア
    for (int i=0; i<N; i++){
        cin >> S >> P;
        p[i] = make_pair(make_pair(S, -P), i); //ここめちゃかしこい！！
    }

    sort(p, p+N);

    for(int i=0; i<N; i++){
        cout << p[i].second+1 << endl;
    }
}