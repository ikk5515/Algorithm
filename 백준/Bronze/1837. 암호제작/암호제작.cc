//BOJ_1837_암호제작
#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	string P;
	int K;
	cin >> P >> K;
	for (int i = 2, j; i < K; ++i) {
		int ans = 0, tmp = 1;
		for (j = P.length() - 1; j >= 0; --j) {
			ans = (ans + (P[j] - '0') * tmp) % i;
			tmp *= 10;
			tmp %= i;
		}
		if (ans == 0) {
			cout << "BAD " << i;
			return 0;
		}
	}
	cout << "GOOD";
	return 0;
}