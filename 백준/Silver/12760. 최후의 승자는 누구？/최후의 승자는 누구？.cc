// BOJ_12760_최후의 승자는 누구?
#include <iostream>
#include <algorithm>
using namespace std;

int arr[101][101];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int person[101] = { 0, };
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
        sort(arr[i], arr[i] + m, greater<int>());
    }

    for (int i = 0; i < m; i++) {
        int max = arr[0][i];
        for (int j = 0; j < n; j++) {
            if (arr[j][i] > max) {
                max = arr[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == max) {
                person[j]++;
            }
        }
    }
    int cnt = person[0];
    for (int i = 0; i < n; i++) {
        if (person[i] > cnt) {
            cnt = person[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (person[i] == cnt) {
            cout << i+1 << " ";
        }
    }
    return 0;
}