// BOJ_28097_모범생 포닉스
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int day = 0, hour = 0;
    for (int i = 0; i < n; i++) {
        int study; cin >> study;
        hour += study + 8;
    }
    hour -= 8;
    day = hour / 24;
    hour = hour % 24;
    cout << day << " " << hour;

    return 0;
}