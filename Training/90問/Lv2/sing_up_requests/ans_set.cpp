#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  set<string> set;

  // setも追加・削除・検索がO(logN)
  for (int i = 1; i <= n; ++i) {
    string s; 
    cin >> s;
    // 要素が追加されたかどうかを返す
    // setは順序付き集合なので値を重複していれることはできないという性質を用いている
    if (set.insert(s).second) {
      cout << i << endl;
    }
  }
}