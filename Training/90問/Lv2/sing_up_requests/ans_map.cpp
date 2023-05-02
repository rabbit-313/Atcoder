#include <iostream>
#include <string>
#include <map>
using namespace std;

int N;
string S[1 << 18];
map<string, int> Map;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> S[i];
        // mapに文字列がない場合は0を返す（追加される）。0を返した文字列のvalueを1にする。
        // mapはO(logN)で計算可能
		if (Map[S[i]] == 0) {
			Map[S[i]] = 1;
			cout << i << endl;
		}
	}
	return 0;
}