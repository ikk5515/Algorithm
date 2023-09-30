// BOJ_1059_좋은구간
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int L; cin >> L;
    int arr[51] = { 0, };
    for (int i = 0; i < L; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + L);
    int N; cin >> N;
    int left = 0, right = 0;
    for (int i = 0; i < L; i++) {
        if (arr[i] < N) left = arr[i];
        else if (arr[i] > N) {
            right = arr[i];
            break;
        }
        else {
            cout << 0;
            return 0;
        }
    }
    cout << (N - left) * (right - N) - 1;
    return 0;
}