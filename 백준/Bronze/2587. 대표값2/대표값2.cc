// BOJ_2587_대표값2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[5] = { 0, };
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 5);
    cout << sum / 5 << "\n";
    cout << arr[2] << "\n";
    return 0;
}