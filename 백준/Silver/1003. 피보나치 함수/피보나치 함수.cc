// BOJ_1003_피보나치 함수
#include <iostream>
using namespace std;

int fibo[41];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= 40; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp == 0) {
            cout << 1 << " " << 0 << "\n";
        } else {
            cout << fibo[tmp-1] << " " << fibo[tmp] << "\n";
        }
    }
    return 0;
}