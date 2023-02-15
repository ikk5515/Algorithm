// BOJ_10103_주사위 게임
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a[16] = { 0, };
    int b[16] = { 0, };

    int asum = 100, bsum = 100;

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] > b[i]) {
            bsum -= a[i];
        } else if (b[i] > a[i]) {
            asum -= b[i];
        }
    }
    cout << asum << "\n" << bsum;
    return 0;
}