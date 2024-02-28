// BOJ_27267_Сравнение комнат
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a * b > c * d) cout << 'M';
    else if (a * b == c * d) cout << 'E';
    else cout << 'P';
    return 0;
}