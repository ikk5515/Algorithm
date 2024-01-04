// BOJ_10480_Oddities
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, num; cin >> n;
    while(n--){
        cin >> num;
        if(num%2==0) cout << num << " is even\n";
        else cout << num << " is odd\n";
    }
    return 0;
}