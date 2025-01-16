#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Đọc dữ liệu từ PYRAMID.INP
    long long n, r, c;
    cin >> n >> r >> c;

    // Câu 1: Tìm hàng và cột của số n
    long long row = (-1 + sqrt(1 + 8 * n)) / 2; // Giải phương trình bậc 2: r(r+1)/2 >= n
    if (row * (row + 1) / 2 < n)
        row++;
    long long startOfRow = row * (row - 1) / 2 + 1;
    long long col = (row % 2 == 1) ? (row - (n - startOfRow)) : (n - startOfRow + 1);

    // Câu 2: Tìm số tại hàng r và cột c
    long long startOfGivenRow = r * (r - 1) / 2 + 1;
    long long number = (r % 2 == 1) ? (startOfGivenRow + (r - c)) : (startOfGivenRow + (c - 1));

    // Ghi kết quả ra PYRAMID.OUT
    cout << row << " " << col << endl;
    cout << number << endl;

    return 0;
}
