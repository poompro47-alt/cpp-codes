#include <iostream>
using namespace std;

int main() {
    // Divide and Conquer (ใช้บ่อยใน สอวน. ค่าย 2)
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 5, b = 3;
    // a = 5 (0101), b = 3 (0011)
    // bitwise AND (&)
    // bitwise OR (|)
    // bitwise XOR (^) (ถ้าความจริงต่างกันจะได้ 1 ถ้าเหมือนกันจะได้ 0)
    // bitwise NOT (~) (กลับค่าความจริง)(0 -> 1, 1 -> 0)
    // bitwise left shift (<<) (เลื่อนบิตไปทางซ้าย)(คูณด้วย 2)
    // bitwise right shift (>>) (เลื่อนบิตไปทางขวา)(หารด้วย 2)

    cout << "(a & b) " << (a & b) << "\n"; // 1 (0001)
    cout << "(a | b) " << (a | b) << "\n"; // 7 (0111)
    cout << "(a ^ b) " << (a ^ b) << "\n"; // 6 (0110)
    cout << "(~a) " << (~a) << "\n"; // -6 (11111010)
    cout << "(a << 1) " << (a << 1) << "\n"; // 10 (1010)(เลื่อนตําแหน่งไปข้างหน้า 1 ตําแหน่ง)
    cout << "(a >> 1) " << (a >> 1) << "\n"; // 2 (0010)(เลื่อนตําแหน่งไปข้างหลัง 1 ตําแหน่ง)
    return 0;
}
