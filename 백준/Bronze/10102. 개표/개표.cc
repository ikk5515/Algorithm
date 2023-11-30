// BOJ_10102_개표
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int V;
    string str;
    int A = 0, B = 0;

    cin >> V >> str;
    for (int i = 0; i < V; i++) {
        if (str[i] == 'A') A++;
        else B++;
    }
    if (A > B) cout << "A";
    else if (A < B) cout << "B";
    else cout << "Tie";
    return 0;
}