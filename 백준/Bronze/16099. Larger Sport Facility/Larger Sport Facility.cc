// BOJ_16099_Larger Sport Facility
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long T, lt, wt, le, we;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> lt >> wt >> le >> we;
        if (lt * wt < le * we) cout << "Eurecom\n";
        else if (lt * wt == le * we) cout << "Tie\n";
        else cout << "TelecomParisTech\n";
    }
    return 0;
}