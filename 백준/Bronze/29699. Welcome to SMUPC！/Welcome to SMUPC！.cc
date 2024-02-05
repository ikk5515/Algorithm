// BOJ_29699_Welcome to SMUPC!
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    string str = "WelcomeToSMUPC";
    if (N % 14 == 0) cout << 'C';
    else  cout << str[(N % 14) -1];
    return 0;
}