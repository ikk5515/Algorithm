// BOJ_23803_골뱅이찍기 - ㄴ
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    for (int i = 0; i < N*5 - N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "@";
        }
        cout << "\n";
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N*5; j++) {
            cout << "@";
        }
        cout << "\n";
    }
    return 0;
}