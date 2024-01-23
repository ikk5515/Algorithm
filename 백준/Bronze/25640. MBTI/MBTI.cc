// BOJ_25640_MBTI
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, cnt = 0;;
    string jinhoMBTI, friendMBTI;
    cin >> jinhoMBTI  >> N;

    while(N--) {
        cin >> friendMBTI;
        if(jinhoMBTI == friendMBTI) cnt++;
    }
    cout << cnt;
    return 0;
}