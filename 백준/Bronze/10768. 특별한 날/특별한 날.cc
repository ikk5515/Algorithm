// BOJ_10768_특별한 날
#include <iostream>
using namespace std;

int main() { 
    int a,b; cin >> a >> b;
 
    if (a == 2) {
        if(b == 18) {
            cout << "Special";
        } else if(b > 18) {
            cout << "After";
        } else {
            cout << "Before";
        } 
    }
 
    else if(a > 2) {
        cout << "After";
    }
    else {
        cout<<"Before";
    }
    return 0;
}