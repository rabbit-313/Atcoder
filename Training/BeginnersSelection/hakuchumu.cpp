#include <bits/stdc++.h>
#include <vector>
using namespace std;

void reverse_string(std::string& str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        swap(str[i], str[length - i - 1]);
    }
}

const string no = "NO";
const string yes = "YES";

vector<string> str = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string S;
    cin >> S;

    reverse_string(S);

    for(int i=0; i<4; i++){
        reverse_string(str.at(i));
    }

    

    for(int i=0; i<S.size();){
        if (S.at(i) == 'm'){
            for(int j=0; j<str.at(0).size(); j++){
                if(S.at(i+j) != str.at(0).at(j)){
                    cout << no << endl;
                    return 0;
                }
            }
            i += str.at(0).size();
        }else if(S.at(i) == 'e'){
            for(int j=0; j<str.at(2).size(); j++){
                if(S.at(i+j) != str.at(2).at(j)){
                    cout << no << endl;
                    return 0;
                }
            }
            i += str.at(2).size();
        }else if(S.at(i) == 'r' && S.at(i+1) == 'e' && S.at(i+2) == 'm'){
             for(int j=0; j<str.at(1).size(); j++){
                if(S.at(i+j) != str.at(1).at(j)){
                    cout << no << endl;
                    return 0;
                }
            }
            i += str.at(1).size();
        }else if(S.at(i) == 'r' && S.at(i+1) == 'e' && S.at(i+2) == 's'){
             for(int j=0; j<str.at(3).size(); j++){
                if(S.at(i+j) != str.at(3).at(j)){
                    cout << no << endl;
                    return 0;
                }
            }
            i += str.at(3).size();
        }else{
            cout << no << endl;
            return 0;
        }
    }
    cout << yes << endl;

}
