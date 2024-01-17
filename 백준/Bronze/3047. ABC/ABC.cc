// BOJ_3047_ABC
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[3] = { 0, };
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);
    
    string str;
    cin >> str;

    for (int i = 0; i < 3; i++) {
        if (str[i] == 'A') cout << arr[0] << ' ';
        else if (str[i] == 'B') cout << arr[1] << ' ';
        else cout << arr[2] << ' ';
    }
    return 0;
}