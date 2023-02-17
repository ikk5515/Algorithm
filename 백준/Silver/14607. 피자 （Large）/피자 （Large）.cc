// BOJ_14606_피자 (Small)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n; cin >> n;
    
    cout << (n * (n-1)) / 2;
    return 0;
}
/*
6 => 15         => 6 * 5 / 2
7 => 21         => 7 & 6 / 2
8 => 28         => 8 * 7 / 2
9 => 36         => 9 * 8 / 2
10 => 45        => 10 * 9 / 2
*/