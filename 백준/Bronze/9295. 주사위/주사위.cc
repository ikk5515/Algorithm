// BOJ_9295_주사위
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, a, b;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> a >> b;
        cout << "Case " << i << ": " << a+b << "\n";
    }
    return 0;
}