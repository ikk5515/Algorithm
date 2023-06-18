// BOJ_26307_Correct
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int hh, mm; cin >> hh >> mm;

  int start = 9 * 60, submit = hh * 60 + mm;

  int c = submit - start;

  cout << c;
  return 0;
}