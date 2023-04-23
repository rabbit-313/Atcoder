#include <bits/stdc++.h>
using namespace std;

int N;
int a, b;
// vector <pair<int, int>> p(N);

int main(){
    cin >> N;
    vector <pair<int, int>> p(N);

    for (int i=0; i < N; i++){
        cin >> a >> b;
        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    for (int i =0; i<N; i++){
        tie(b, a) = p.at(i);
        cout << a << " " << b << endl;
    }
}