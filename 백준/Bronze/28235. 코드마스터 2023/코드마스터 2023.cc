// BOJ_28235_코드마스터 2023
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    if (str == "SONGDO") {
        cout << "HIGHSCHOOL";
        return 0;
    } else if(str == "CODE") {
        cout << "MASTER";
        return 0;
    } else if (str == "2023") {
        cout << "0611";
        return 0;
    } else {
        cout << "CONTEST";
        return 0;
    }
}