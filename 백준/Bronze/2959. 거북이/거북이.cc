// BOJ_2959_거북이
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[4] = { 0, };
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    cout << arr[0] * arr[2];
    return 0;
}