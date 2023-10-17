// BOJ_28701_세제곱의 합
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    for (int i = 1; i <= 3; i++) {
        long long sum = 0;
        if (i == 2) {
            for (int j = 1; j <= N; j++) {
                sum += j;
            }
            cout<<fixed;
            cout.precision(0);
            cout << pow(sum, 2) << "\n";
            continue;
        } else {
            for (int j = 1; j <= N; j++) {
                sum += pow(j, i);
            }
        }
        
        cout << sum << "\n";
    }
    return 0;
}