// BOJ_18301_Rats
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n1, n2, n12; cin >> n1 >> n2 >> n12;

    cout << (n1+1)*(n2+1)/(n12+1)-1;
    return 0;
}