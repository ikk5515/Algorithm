// BOJ_4740_거울, 오!거울
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    while(1){
        getline(cin, str);

        if(str == "***") {
            break;
        }
        for(int i = str.length()-1; i >= 0; i--){
            cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}
