// BOJ_14720_우유 축제
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n; cin >> n;
	int arr[1001];
	int max = 0, cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < n; j++) {
		if (arr[j] == 0 && cnt == 0) {
			max++;
			cnt = 1;
		} 
        if (arr[j] == 1 && cnt == 1) {
			max++;
			cnt = 2;
		}
		if (arr[j] == 2 && cnt == 2) {
			max++;
			cnt = 0;
		}
	}
	cout << max;
	return 0;
}