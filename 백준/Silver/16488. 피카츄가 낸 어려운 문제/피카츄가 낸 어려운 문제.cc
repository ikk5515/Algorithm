// BOJ_16488_피카츄가 낸 어려운 문제
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n, k; cin >> n >> k;

    long long res;
    res = n * n * k;

    cout << res;
    return 0;
}