// BOJ_26489_Gum Gum for Jay Jay
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string line = ""; 
    int cnt = 0;

  while (getline(cin, line)) cnt++;

  cout << cnt;
  return 0;
}