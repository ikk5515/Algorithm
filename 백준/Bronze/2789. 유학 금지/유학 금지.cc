// BOJ_2789_유학 금지
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string a; cin >> a;
    string b = "CAMBRIDGE";
    
    for (int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                a[i]=0;
            }
        }
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i]!=0) {
            cout << a[i];
        }
    }
    return 0;
}