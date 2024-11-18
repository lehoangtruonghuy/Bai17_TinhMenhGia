// bai17_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void tinhMenhGia(int tien) {
    vector<int> menhGia = { 500, 200, 100, 50, 20, 10, 5, 1 }; // Các mệnh giá
    vector<int> soTo(menhGia.size(), 0); // Lưu số tờ tiền từng mệnh giá

    int tongSoTo = 0;

    for (size_t i = 0; i < menhGia.size(); ++i) {
        soTo[i] = tien / menhGia[i];  // Số lượng tờ tiền của mệnh giá hiện tại
        tien %= menhGia[i];           // Số tiền còn lại sau khi trừ đi
        tongSoTo += soTo[i];          // Tính tổng số tờ
    }

    // In kết quả
    cout << "Số lượng tờ từng mệnh giá:\n";
    for (size_t i = 0; i < menhGia.size(); ++i) {
        cout << "Mệnh giá " << menhGia[i] << ": " << soTo[i] << " tờ\n";
    }
    cout << "Tổng số tờ tiền: " << tongSoTo << endl;
}

int main() {
    int tien;
    cout << "Nhập số tiền muốn rút: ";
    cin >> tien;

    tinhMenhGia(tien);

    return 0;
}