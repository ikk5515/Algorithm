// BOJ_5086_배수와 약수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(true) {
        int a, b; cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a % b == 0) cout << "multiple\n";
        else if (b % a == 0) cout << "factor\n";
        else cout << "neither\n";
    }
    return 0;
}