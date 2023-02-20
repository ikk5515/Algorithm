// BOJ_2010_플러그
#include <iostream> 
using namespace std;

int arr[500001] = { 0, };
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans = ans + arr[i] - 1;
    }
    cout << ans;
    return 0;
}