// BOJ_14489_치킨 두 마리 (...)
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int a, b, c; cin >> a >> b >> c;

	if(a + b >= 2 * c) {
        cout << a + b - 2 * c;
    } else {
        cout << a + b;
    }
    return 0;
}