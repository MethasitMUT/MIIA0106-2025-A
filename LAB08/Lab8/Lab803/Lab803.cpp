#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) เติม field: id, nickname, lineId, phone
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO 2) เขียนฟังก์ชัน printStudent ให้แสดงผลครบทุก field
void printStudent(Student s) {
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;
    cout << "Phone: " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO 3) รับข้อมูล 1 คน
    cout << "Enter ID: "; cin >> s1.id;
    cout << "Enter Nickname: "; cin >> s1.nickname;
    cout << "Enter Line ID: "; cin >> s1.lineId;
    cout << "Enter Phone: "; cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO 3) เรียกใช้ฟังก์ชัน printStudent
    printStudent(s1);

    return 0;
}