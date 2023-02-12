// BOJ_13699_점화식
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long arr[36] = { 0, };

    int n; cin >> n;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 5;
    arr[4] = 14;
    arr[5] = 42;
    arr[6] = 132;
    for (int i = 7; i < 36; i++) {
        long long sum = 0;
        for (int j = 0; j < i; j++) {
            sum += arr[i - j - 1] * arr[j];
        }
        arr[i] = sum;
    }
    cout << arr[n];
    return 0;
}