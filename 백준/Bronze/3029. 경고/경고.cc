// BOJ_3029_경고
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int t = t2 - t1;
    if (t1 == t2) {
        printf("24:00:00");
        return 0;
    }
    if (t < 0) t += 24 * 3600;
    printf("%02d:%02d:%02d", t / 3600, t % 3600 / 60, t % 60);
    return 0;
}