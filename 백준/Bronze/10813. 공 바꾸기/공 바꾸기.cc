// BOJ_10813_공 바꾸기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[101] = { 0, };
    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;
        int tmp;
        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }    

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}