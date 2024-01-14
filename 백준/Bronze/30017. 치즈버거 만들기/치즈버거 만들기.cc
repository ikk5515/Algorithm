// BOJ_30017_치즈버거 만들기
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int cnt = 3;
    int A, B; cin >> A >> B;
    A -= 2; B -= 1;
    int C = min(A, B);
    cnt += (C * 2);
    cout << cnt;
    return 0;
}