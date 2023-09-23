// BOJ_2953_나는 요리사다
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int tot[5];
	int num, idx, max = 0;
	
	for(int i = 0; i < 5; i++) {
		tot[i] = 0;
		for(int j = 0; j < 4; j++) { 
			cin >> num;
			tot[i] += num;
		}
		if(max < tot[i]) { 
			max = tot[i];
			idx = i;
		}
	}
	cout << idx + 1 << " " << max;
	return 0;
}