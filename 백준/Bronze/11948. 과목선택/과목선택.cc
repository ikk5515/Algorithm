// BOJ_11948_과목선택
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[4], b[2];
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 2; i++) {
        cin >> b[i];
    }
    sort(a, a + 4);
    sort(b, b + 2);
    for (int i = 1; i < 4; i++) {
        sum += a[i];
    }
    sum += b[1];
    cout << sum;
    return 0;
}