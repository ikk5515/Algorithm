// BOJ_13410_거꾸로 구구단
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<int> v;

    int n, m; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a = n * i;
        string str = to_string(a); 
        string str2 = "";
        for (int j = str.size()-1; j >= 0; j--) {
            str2 += str[j];
        }
        v.push_back(atoi(str2.c_str()));
    }
    
    int max_num = *max_element(v.begin(), v.end());
    cout << max_num;
    return 0;
}