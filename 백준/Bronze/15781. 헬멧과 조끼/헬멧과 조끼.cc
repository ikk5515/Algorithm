// BOJ_15781_헬멧과_조끼
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, m, m_h = 0, m_a = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        if (h > m_h) m_h = h;
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a > m_a) m_a = a;
    }
    cout << m_h + m_a;
    return 0;
}