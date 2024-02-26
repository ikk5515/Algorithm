// BOJ_3004_체스판 조각
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a = n / 2;
    int b = n - a;
    cout << (a + 1) * (b + 1);
    return 0;
}