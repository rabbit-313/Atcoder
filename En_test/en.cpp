#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector <string> S;
  string input;
  for(int i=0; i<n; i++){
    cin >> input;
    S.push_back(input);
  }

  int max_length = -1;

  // 全探索アルゴリズム
  // 文字列の先頭2文字と末尾2文字を比べる
  for(int i=0; i<n; i++){
    int S_i_size = S.at(i).size();
    if (S_i_size < 2){ // 文字列の長さが2未満なら飛ばす
        continue;
    }
    char S_i_last = S.at(i).at(S_i_size-1); // i番目の文字列の最後の文字
    char S_i_st_last = S.at(i).at(S_i_size-2); // i番目の文字列の最後から2番目の文字
    

    // i番目とj番目の文字列を比較していく
    for(int j=0; j<n; j++){ 
        int S_j_size = S.at(j).size();
        if(i == j || S_j_size < 2){ // 自分自身または比較する文字列が2未満なら飛ばす
            continue;
        }

        char S_j_second = S.at(j).at(1); // i番目の文字列の最後の文字
        char S_j_head = S.at(j).at(0); // i番目の文字列の最後から2番目の文字

        if (S.at(j).at(1) == S_i_last && S.at(j).at(0) == S_i_st_last){ // 比較する
            int connect_size = S.at(i).size() + S.at(j).size() - 2; // 二つの文字列を繋げた長さ
            if (connect_size > max_length){ // 最大を更新する
                max_length = connect_size;
            }
        }
    }
  }
  cout << max_length << endl;
}