// BOJ_2460_지능형 기차 2
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int in, out, max = 0, sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> out >> in;
        sum += in - out;
        if (sum > max) max = sum;
    }
    cout << max << '\n';
    return 0;
}