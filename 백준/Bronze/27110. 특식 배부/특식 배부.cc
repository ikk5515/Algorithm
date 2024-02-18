// BOJ_27110_특식 배부
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, A, B, C; cin >> N >> A >> B >> C;
    cout << min(A, N) + min(B, N) + min(C, N);
    return 0;
}