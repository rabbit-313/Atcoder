#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m1, m2, m3, m4;
    cin >> n >> m1 >> m2 >> m3 >> m4;
    vector <string> s(n);
    vector <int> d(n);

    for(int i=0; i < n; i++){
        cin >> s.at(i) >> d.at(i);
    }
    vector <string> S, M, L, X;

    for(int i=0; i<n; i++){
        if(m1 <= d.at(i) && d.at(i) < m2){
            S.push_back(s.at(i));
        }else if(m2 <= d.at(i) && d.at(i) < m3){
            M.push_back(s.at(i));
        }else if(m3 <= d.at(i) && d.at(i) < m4){
            L.push_back(s.at(i));
        }else{
            X.push_back(s.at(i));
        }
    }

    cout << "S:" << endl;
    for(int i=0; i<S.size(); i++){
        cout << S.at(i) << endl;
    }
    cout << "M:" << endl;
    for(int i=0; i<M.size(); i++){
        cout << M.at(i) << endl;
    }
    cout << "L:" << endl;
    for(int i=0; i<L.size(); i++){
        cout << L.at(i) << endl;
    }
    cout << "X:" << endl;
    for(int i=0; i<X.size(); i++){
        cout << X.at(i) << endl;
    }

}