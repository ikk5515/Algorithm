// BOJ_13597_Tri-du
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B;
    cin >> A >> B;
    if(A == B) cout << A;
    else cout << max(A, B);
    return 0;
}