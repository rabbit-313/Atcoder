#include <iostream>
#include <string>
#include <vector>
#include <map>
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

  map<long long, string> map_head;
  map<long long, string> map_tail;

  int max_length = -1;

  for(int i=0; i<n; i++){
      int S_size = S.at(i).size();
      if(S_size < 2){
        continue;
      }
      map_head.insert(make_pair(i, S.at(i).substr(0,2)));
      map_tail.insert(make_pair(i, S.at(i).substr(S.at(i).size() - 2)));
  }

  for(int i=0; i<map_head.size(); i++){
    for(int j=0; j<map_tail.size(); j++){
      if(i == j){
        continue;
      }
      if (map_head[i] == map_tail[j]){
        if(max_length < S.at(i).size() + S.at(j).size() - 2)
        max_length = S.at(i).size() + S.at(j).size() - 2;
      }
    }
  }

  
  cout << max_length << endl;
}