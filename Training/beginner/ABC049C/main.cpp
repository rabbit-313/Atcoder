#include <iostream>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;

    vector <string> T(4);
    T.push_back("dream");
    T.push_back("dreamer");
    T.push_back("erase");
    T.push_back("eraser");


    long long i = 0;
    while(1){

        if(S.at(i) == 'e'){
            for(int j=0; j<T.at(2).size(); j++){
                if(T.at(2).at(j) != S.at(i+j)){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            if(S.at(i+5) == 'r'){
                i += 5;
            }else{
                i += 4;
            }
        }else if(S.at(i) == 'd'){
            for(int j=0; j<T.at(1).size(); j++){
                if(T.at(1).at(j) != S.at(i+j)){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            if(S.at(i+5) == 'e' && S.at(i+6) == 'r'){
                i += 6;
            }else{
                i += 4;
            }
        }else{
            cout << "NO" << endl;
            return 0;
        }
        i++;
        if(i == S.size()){
            cout << "YES" << endl;
            return 0;
        }
    }
}