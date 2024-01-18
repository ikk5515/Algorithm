// BOJ_10178_할로윈의 사탕
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, C, V;
    cin >> T;
    while (T--) {
        cin >> C >> V;
        cout << "You get " << C / V << " piece(s) and your dad gets " << C % V << " piece(s).\n";
    }
    return 0;
}