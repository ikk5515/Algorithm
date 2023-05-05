// BOJ_19944_뉴비의 기준은 뭘까?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin >> n >> m;

    if (m == 1 || m == 2) {
        cout << "NEWBIE!";
        return 0;
    } else if (m <= n) {
        cout << "OLDBIE!";
        return 0;
    } else {
        cout << "TLE!";
    }
    return 0;
}