// BOJ_5585_거스름돈
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int money = 1000 - n;

    int cnt = 0;
    while (money > 0) {
        if (money >= 500) {
            cnt++;
            money-=500;
        } else if (money >= 100) {
            cnt++;
            money-=100;
        } else if (money >= 50) {
            cnt++;
            money-=50;
        } else if (money >= 10) {
            cnt++;
            money-=10;
        } else if (money >= 5) {
            cnt++;
            money-=5;
        } else if (money >= 1) {
            cnt++;
            money-=1;
        }
    }
    cout << cnt;
    return 0;
}