// BOJ_21300_Bottle Return
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
    int MAX = 6;
    int PRICE = 5;
	int sum = 0;

	for (int i = 0; i < MAX; i++) {
		int num; cin >> num;
		sum += num;
	}
	cout << sum * PRICE;

	return 0;
}