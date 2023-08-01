// BOJ_14924_폰 노이만과 파리
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int s, t, d; cin >> s >> t >> d;
    cout << (d / (s * 2)) * t;
    return 0;
}