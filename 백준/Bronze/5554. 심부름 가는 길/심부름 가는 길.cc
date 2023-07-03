#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int tmp, sum = 0;
    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        sum += tmp;
    }
    cout << sum / 60 << "\n" << sum % 60;
    return 0;
}