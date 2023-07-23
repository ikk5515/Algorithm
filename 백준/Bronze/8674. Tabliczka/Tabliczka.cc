// BOJ_8674_Tabliczka
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	long long a, b;
	cin >> a >> b;

	if (a % 2 && b % 2) {
		cout << min(a, b);
	} else {
		cout << 0;
	}
	return 0;
}