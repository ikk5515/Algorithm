// BOJ_5575_타임 카드
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int h1, m1, s1, h2, m2, s2;
    for (int i = 0; i < 3; i++) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        int t1 = h1 * 3600 + m1 * 60 + s1;
        int t2 = h2 * 3600 + m2 * 60 + s2;
        int t = t2 - t1;
        cout << t / 3600 << " " << (t % 3600) / 60 << " " << t % 60 << "\n";
    }
    return 0;
}