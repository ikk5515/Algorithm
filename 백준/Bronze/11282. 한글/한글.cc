// BOJ_11282_한글
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
	string str;
	n += 3071;
	str.push_back(n / 4096 + 234);
	str.push_back(n / 64 % 64 + 128);
	str.push_back(n % 64 + 128);
	
    cout << str;
    return 0;
}