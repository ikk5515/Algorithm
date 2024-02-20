// BOJ_6768_Don't Pass Me The Ball
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cout << (n-1) * (n-2) * (n-3) / 6;
    return 0;
}