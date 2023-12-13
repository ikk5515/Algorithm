// BOJ_22864_피로도
#include <iostream>
using namespace std;

int main() {
    int A, B, C, M; cin >> A >> B >> C >> M;

    int work = 0, tired = 0, w = 0;
    for (int i = 0; i < 24; i++) {
        if (tired + A <= M) {
            work += B;
            tired += A;
        } else {
            tired -= C;
            if (tired < 0) tired = 0;
        }
        if (w < work) w = work;
    }
    cout << w;
    return 0;
}