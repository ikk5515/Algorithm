// BOJ_28113_정보섬의 대중교통
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, A, B; cin >> N >> A >> B;

    if (A < B) cout << "Bus";
    else if (A > B) cout << "Subway";
    else cout << "Anything";
    return 0;
}