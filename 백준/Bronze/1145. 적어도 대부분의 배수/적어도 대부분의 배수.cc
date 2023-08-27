// BOJ_1145_적어도 대부분의 배수
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    int num = arr[2];
    while (1) {
        int cnt = 0;
        for (int i = 0; i < 5; i++) {
            if (num % arr[i] == 0) {
                cnt++;
            }
        }
        if (cnt >= 3) {
            cout << num;
            break;
        }
        num++;
    }
    return 0;
}