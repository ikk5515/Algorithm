// BOJ_1592_영식이와 친구들
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M, L; cin >> N >> M >> L;
    int arr[1001] = { 0, };
    int cnt = 0;
    int num = 1;
    while(1) {
        arr[num]++;
        if(arr[num] == M) {
            break;
        }
        if(arr[num] % 2 == 1) {
            num += L;
            if (num > N) {
                num -= N;
            }
        } else {
            num -= L;
            if(num <= 0) {
                num += N;
            }
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}