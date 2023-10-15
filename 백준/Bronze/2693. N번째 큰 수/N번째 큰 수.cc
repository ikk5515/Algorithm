// BOJ_2693_N번째 큰 수
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, arr[10] = { 0, };
    cin >> T;
    while(T--) {
        for(int i = 0; i < 10; i++) {
            cin >> arr[i];
        } 
        sort(arr, arr+10);
        cout << arr[7] << "\n";
    }
    return 0;
}