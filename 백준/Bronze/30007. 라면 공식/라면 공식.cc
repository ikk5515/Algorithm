// BOJ_30007_라면 공식
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int A, B, X; cin >> A >> B >> X;
        cout << A * X - A + B << "\n";
    }
    return 0;
}