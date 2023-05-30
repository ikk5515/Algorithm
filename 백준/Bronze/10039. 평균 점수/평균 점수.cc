// BOJ_10039_평균 점수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int a; cin >> a;
        if (a < 40) {
            sum += 40;
        } else {
            sum += a;
        }
    }
    cout << sum / 5;
    return 0;
}