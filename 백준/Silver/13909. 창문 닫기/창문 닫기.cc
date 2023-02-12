// BOJ_13909_창문 닫기
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    long long n; cin >> n;

    cout << fixed;
    cout.precision(0);
    cout << (long long)sqrt(n);
    return 0;
}