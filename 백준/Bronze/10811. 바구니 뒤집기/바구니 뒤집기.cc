// BOJ_10811_바구니 뒤집기
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[101] = { 0, };
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;

        reverse(arr+a-1, arr+b);
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}