#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int number = 0x2A; // มีค่าเท่ากับ 42

    // cout แสดงฐาน 10 โดยค่าเริ่มต้น
    cout << number << "\n"; // 42

    // เปลี่ยนการแสดงผลเป็นฐาน 16
    cout << hex << number << "\n"; // 2a

    // ใช้ตัวอักษรพิมพ์ใหญ่
    cout << uppercase << number << "\n"; // 2A

    // เติมคำนำหน้า 0x เอง
    cout << "0x" << number << "\n"; // 0x2A

    // เปลี่ยนกลับเป็นฐาน 10
    cout << dec << number << "\n"; // 42

    return 0;
}
