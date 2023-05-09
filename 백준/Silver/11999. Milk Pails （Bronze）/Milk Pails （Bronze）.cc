// BOJ_11999_Milk Pails (Bronze)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int x,y,m; cin >> x >> y >> m;
    
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (x*i + y*j <= m) {
                sum = max(sum, x*i + y*j);
            }
        }
    }
    cout << sum;
    return 0;
}