// BOJ_9366_삼각형 분류
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    int arr[3] = { 0 , };

    
    for (int i = 1; i <= T; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << "Case #" << i << ": ";
        if (arr[0] + arr[1] <= arr[2]) cout << "invalid!\n";
        else if (arr[0] == arr[1] && arr[1] == arr[2]) cout << "equilateral\n";
        else if (arr[0] == arr[1] || arr[1] == arr[2]) cout << "isosceles\n";
        else cout << "scalene\n";
    }
    return 0;
}