// BOJ_11023_더하기 3
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, sum = 0;
    while (cin >> n) {
        sum += n;
    }
    cout << sum;
    return 0;
}