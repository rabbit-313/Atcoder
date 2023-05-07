#include <vector>
#include <iostream>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
    // 隣接行列だとMLEになってしまう.TLEではない
    // 隣接リスト
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b; --a, --b;
		G.at(a).push_back(b);
		G.at(b).push_back(a);
	}

    //O(D1+D2+...=M)
	int answer = 0;
	for (int i = 0; i < N; ++i) {
		int cnt = 0;
		for (int j : G[i]) {
			if (j < i) {
				++cnt;
			}
		}
		if (cnt == 1) {
			++answer;
		}
	}
	cout << answer << endl;
	return 0;
}