// BOJ_1015_수열 정렬
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], P[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        P[i] = A[i];
    }
    sort(P, P + N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            if (A[i] == P[j]) {
                cout << j << " ";
                P[j] = -1;
                break;
            }
    }
    return 0;
}