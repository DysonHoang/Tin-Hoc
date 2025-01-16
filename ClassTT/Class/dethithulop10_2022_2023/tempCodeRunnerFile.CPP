#include <iostream>
#include <string>
using namespace std;

string getDayOfWeek(int d, int m, int y) {
    // Chuyển tháng 1 và 2 thành tháng 13 và 14 của năm trước đó
    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;  // Năm của thế kỷ
    int J = y / 100;  // Thế kỷ

    // Công thức Zeller's Congruence
    int h = (d + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    // Chuyển đổi từ kết quả công thức sang tên ngày
    switch (h) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "";
    }
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    cout << getDayOfWeek(d, m, y) << endl;
    return 0;
}
