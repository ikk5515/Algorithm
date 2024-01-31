// BOJ_8723_Patyki
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a[3]= { 0, };
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(a[0] == a[1] && a[1] == a[2]) cout << 2;
    else if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) cout << 1;
    else cout << 0;
    return 0;
}