#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int arr[11] = { 0, };
    for (int i = 0; i < skip.size(); i++) {
        arr[i] = skip[i];
    }
    for (int i = 0; i < s.size(); i++) {
        char cch = s[i];
        int index_n = index;
        for (int j = 0; j < index_n; j++) {
            cch++;
            if (cch > 122) {
                cch -= 26;
            }
            int countNum = count(begin(arr), end(arr), cch);
            if (countNum >= 1) {
                index_n++;
            }
        }
        answer += cch;
    }
    return answer;
}