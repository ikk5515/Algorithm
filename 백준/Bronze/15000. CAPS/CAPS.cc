// BOJ_15000_CAPS
#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		str[i] -= 32;
    }

	cout << str;
	return 0;
}