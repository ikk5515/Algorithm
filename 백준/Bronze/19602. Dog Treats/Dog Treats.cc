// BOJ_19602_Dog Treats
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int S, M, L; cin >> S >> M >> L;
    if (S + 2 * M + 3 * L >= 10) cout << "happy";
    else cout << "sad";
    return 0;
}