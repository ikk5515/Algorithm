// BOJ_18408_3 つの整数 (Three Integers)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[3] = { 0, };
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        int a; cin >> a;
        arr[a]++;
    }
    for(int i = 0; i < 3; i++) {
        cnt = max(cnt, arr[i]);
    }
    for(int i = 0; i < 3; i++) {
        if(cnt == arr[i]) {
            cout << i; break;
        }
    }
    return 0;
}