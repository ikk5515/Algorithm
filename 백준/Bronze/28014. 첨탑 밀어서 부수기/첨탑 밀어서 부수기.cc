// BOJ_28014_첨탑 밀어서 부수기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    int arr[5000001] = { 0, };
    for (int i = 0; i < N; i++) cin >> arr[i];

    int ans = 1;
    for (int i = 0; i < N-1; i++) {
        if (arr[i] <= arr[i+1]) ans++;
    }   
    cout << ans;
    return 0;
}