// BOJ_5523_경기 결과
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, a = 0, b = 0;
    cin >> N;

    int A, B;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        if (A > B) a++;
        else if (A < B) b++;
    }
    cout << a << " " << b;
    return 0;
}