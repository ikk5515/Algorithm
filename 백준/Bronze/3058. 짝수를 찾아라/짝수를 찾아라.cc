// BOJ_3058_짝수를 찾아라
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, sum, min;
    cin >> T;
    while(T--) {
        sum = 0;
        min = 101;
        for(int i = 0; i < 7; i++) {
            int num;
            cin >> num;
            if(num % 2 == 0) {
                sum += num;
                if(num < min) min = num;
            }
        }
        cout << sum << " " << min << "\n";
    }
    return 0;
}