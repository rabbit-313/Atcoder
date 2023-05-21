#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare_length(string &a, string &b){
  return a.size() > b.size();
}

int main() {
  long long n;
  cin >> n;

  vector <string> S;
  string input;
  for(int i=0; i<n; i++){
    cin >> input;
    S.push_back(input);
  }

  sort(S.begin(), S.end(), compare_length);


  int max_length = -1;

  for(int i=0; i<n; i++){
    int S_size = S.at(i).size();
    if (S_size < 2){
        continue;
    }
    char S_last = S.at(i).at(S_size-1);
    char S_st_last = S.at(i).at(S_size-2);
    

    for(int j=0; j<n; j++){
      int S_j_size = S.at(j).size();
      if(i == j || S_j_size < 2){
        continue;
      }
      if (S.at(j).at(1) == S_last && S.at(j).at(0) == S_st_last){
          max_length = S.at(i).size() + S.at(j).size() - 2;
          cout << max_length << endl;
          return 0;
      }
    }
  }
  cout << max_length << endl;
}