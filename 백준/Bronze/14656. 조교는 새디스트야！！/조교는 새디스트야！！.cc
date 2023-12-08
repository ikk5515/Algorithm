// BOJ_14656_조교는 새디스트야!!
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num != i) cnt++;
    }
    cout << cnt;
    return 0;
}