#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}


int main(){
    int N,P;
    string S;

    cin >> N;
    vector <pair <string, int >> p(N);
    for (int i=0; i<N; i++){
        cin >> S >> P;
        p.at(i) = make_pair(S, P);
    }

    sort(p.begin(), p.end(), cmp);


    cout << " " << endl;
    for (int i =0; i<N; i++){
        tie(S, P) = p.at(i);
        cout << S << " " << P << endl;
    }


}