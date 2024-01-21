// BOJ_14909_양수 개수 세기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num, cnt = 0;
    while (cin >> num) {
        if (num > 0) cnt++;
    }
    cout << cnt;
    return 0;
}