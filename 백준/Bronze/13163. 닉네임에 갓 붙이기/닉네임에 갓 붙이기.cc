// BOJ_13163_닉네임에 갓 붙이기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    cin.ignore();
    while (N--) {
        string name; getline(cin, name);
        int space = name.find(' ');
        name.replace(0, space + 1, "god");
        name.erase(remove(name.begin(), name.end(), ' '), name.end());
        cout << name << "\n";
    }
    return 0;
}