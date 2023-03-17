// BOJ_27736_찬반투표
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int arr[3] = { 0 , };
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[num+1]++;
    }
    if ( arr[1] * 2 >= n) {
        cout << "INVALID";
    } else if ( arr[2] > arr[0]) {
        cout << "APPROVED";
    } else {
        cout << "REJECTED";
    }
    return 0;
}