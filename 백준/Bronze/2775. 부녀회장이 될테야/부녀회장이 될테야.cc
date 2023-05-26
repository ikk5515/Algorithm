// BOJ_2775_부녀회장이 될테야
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;
    int arr[15][15] = { 0, };
    int *k = new int[t];
    int *n = new int[t];
    int sum = 0;

    for (int i = 0; i < 14; i++) {
        arr[0][i] = i+1;
    }
    for (int i= 0; i < 14; i++, sum = 0) {
        for (int j = 0; j < 14; j++) {
            sum += arr[i][j];
            arr[i+1][j] = sum;
        }
    }
    for (int i= 0; i < t; i++) {
        cin >> k[i];
        cin >> n[i];
    }
    for (int i = 0; i < t; i++) {
        cout << arr[k[i]][n[i]-1] << "\n";
    }

    return 0;
}