// BOJ_2435_기상청 인턴 신현수
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, K; cin >> N >> K;
    int arr[101] = { 0, };
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    int max = -1000;
    for (int i = 0; i < N - K + 1; i++) {
        sum = 0;
        for (int j = i; j < i + K; j++) {
            sum += arr[j];
        }
        if (max < sum) {
            max = sum;
        }
    }
    cout << max << "\n";
    return 0;
}