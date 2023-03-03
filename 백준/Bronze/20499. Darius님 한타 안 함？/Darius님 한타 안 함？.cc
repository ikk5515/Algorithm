// BOJ_20499_Darius님 한타 안 함?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    char ch;
    int k, d, a; cin >> k >> ch >> d >> ch >> a;
    if (k + a < d || d == 0) {
        cout << "hasu";
    } else {
        cout << "gosu";
    }
    return 0;
}