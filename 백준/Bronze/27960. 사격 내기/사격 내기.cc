// BOJ_27960_사격 내기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b; cin >> a >> b;
    int c = a ^ b;
    cout << c;
    return 0;
}