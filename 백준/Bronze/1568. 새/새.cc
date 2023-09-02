// BOJ_1568_새
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, cnt = 0;
    cin >> N;
    while (N > 0) {
        for (int i = 1; i <= N; i++) {
            N -= i;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}