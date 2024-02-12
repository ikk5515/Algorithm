// BOJ_10707_수도요금
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, C, D, P; cin >> A >> B >> C >> D >> P;
    int x, y;
	x = A * P;
	if (P > C) y = (P - C)*D + B;
	else y = B;

	if (x < y)  cout << x;
	else  cout << y;
    return 0;
}