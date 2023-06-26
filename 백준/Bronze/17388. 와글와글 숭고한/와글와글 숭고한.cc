#include <iostream>
using namespace std;

int main() {
    int s, k, h; cin >> s >> k >> h;
    if(s + k + h >= 100) {
        printf("OK");
    } else {
        if(s<k && s<h) {
            printf("Soongsil");
        } else if(k<s && k<h) {
            printf("Korea");
        } else if(h<s && h<k) {
            printf("Hanyang");
        }
    }
    return 0;
}