// BOJ_16170_오늘의 날짜는?
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    time_t curr_time = time(NULL);
    struct tm *curr_tm = localtime(&curr_time);

    int curr_year = curr_tm->tm_year + 1900;
    int curr_month = curr_tm->tm_mon + 1;
    int curr_day = curr_tm->tm_mday;

    cout << curr_year << endl;
    cout << curr_month << endl;
    cout << curr_day;

    return 0;
}
