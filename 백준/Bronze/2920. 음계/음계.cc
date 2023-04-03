// BOJ_2920_음계
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[9] = { 0, };
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < 7; i++) {
        if (arr[i+1] > arr[i]) {
            cnt++;
        } else if (arr[i] > arr[i+1]) {
            cnt--;
        }
    }
    if (cnt >= 7) {
        cout << "ascending";
    } else if (cnt <= -7) {
        cout << "descending";
    } else {
        cout << "mixed";
    }
    return 0;
}