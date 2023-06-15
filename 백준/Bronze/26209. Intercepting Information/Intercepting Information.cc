// BOJ_26209_Intercepting Information
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

  bool flag = false;
  for (int i = 0; i < 8; i++) {
    int n; cin >> n;

    if (n == 9) {
        flag = true;
    }
  }

  if (flag){
    cout << "F";
  } else {
    cout << "S";
  }
  return 0;
}