// BOJ_3034_앵그리 창영
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, W, H;
    cin >> N >> W >> H;
    int max = sqrt(W*W + H*H);
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if(num <= max) cout << "DA\n";
        else cout << "NE\n";
    }
    return 0;
}