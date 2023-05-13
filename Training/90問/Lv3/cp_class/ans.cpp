#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int INF = 2000000000;
int N;
int A[300009];
int Q;
int B[300009];

int main() {
	// Step #1. Input
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	cin >> Q;
	for (int i = 1; i <= Q; i++) cin >> B[i];

	// Step #2. Sorting
	sort(A + 1, A + N + 1);

	// Step #3. Binary Search
	for (int i = 1; i <= Q; i++) {
        // lower_boundが返すのはポインタであるためそのままでは使えなお
        //A.begin()を引くことで使えるようになる

		int pos1 = lower_bound(A + 1, A + N + 1, B[i]) - A;

		int Diff1 = INF, Diff2 = INF;
		if (pos1 <= N) Diff1 = abs(B[i] - A[pos1]);
		if (pos1 >= 2) Diff2 = abs(B[i] - A[pos1 - 1]);
		cout << min(Diff1, Diff2) << endl;
	}
    // for (int i = 1; i <= Q; i++) {
	// 	auto pos1 = std::lower_bound(A.begin(), A.end(), B[i]) - A.begin();
	// 	int Diff1 = INF, Diff2 = INF;
	// 	if (pos1 < N) Diff1 = std::abs(B[i] - A[pos1]);
	// 	if (pos1 >= 1) Diff2 = std::abs(B[i] - A[pos1 - 1]);
	// 	std::cout << std::min(Diff1, Diff2) << std::endl;
	// }
	return 0;
}