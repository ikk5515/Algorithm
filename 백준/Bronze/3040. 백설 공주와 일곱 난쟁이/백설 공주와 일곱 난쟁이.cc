// BOJ_3040_백설 공주와 일곱 난쟁이
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[9], sum = 0;
    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(sum - arr[i] - arr[j] == 100) {
                arr[i] = 0;
                arr[j] = 0;
                break;
            }
        }
        if (arr[i] == 0) break;
    }
    sort(arr, arr + 9);
    for(int i = 0; i < 9; i++) {
        if(arr[i] != 0) cout << arr[i] << "\n";
    }
    return 0;
}