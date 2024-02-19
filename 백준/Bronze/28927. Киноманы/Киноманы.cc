// BOJ_28927_Киноманы
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t1, e1, f1, t2, e2, f2; cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

    int max_T = (3 * t1) + (20 * e1) + (120 * f1);
    int mel_T = (3 * t2) + (20 * e2) + (120 * f2);

    if (max_T > mel_T) cout << "Max";
    else if (max_T < mel_T) cout << "Mel";
    else cout << "Draw";
    return 0;
}