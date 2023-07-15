#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int arr[100001];
int arr2[100001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int x, k; cin >> x >> k;
    int num = 0;
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
        arr2[arr[i]]++;
    }
    
    long long cnt = 0;
    for (int i = 0; i < x; i++) {
        cin >> num;
        cnt += arr2[num];
    }
    long long res = pow(x, 2);
    cout << res - cnt;
    return 0;
}