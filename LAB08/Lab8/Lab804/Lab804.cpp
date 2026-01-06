#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) เติม field ให้ครบ
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO 2) เขียน swapStudent เพื่อสลับข้อมูลนักเรียน 2 คน
void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// TODO 3) เขียน sortByID โดยใช้ Bubble Sort เรียงจาก id น้อย -> มาก
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: แสดงผลข้อมูลนักเรียนแต่ละคน
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "Line ID: " << students[i].lineId << endl;
        cout << "Phone: " << students[i].phone << endl;
        cout << "------------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO 4) รับข้อมูลนักเรียน
        cout << "Enter ID: "; cin >> students[i].id;
        cout << "Enter Nickname: "; cin >> students[i].nickname;
        cout << "Enter Line ID: "; cin >> students[i].lineId;
        cout << "Enter Phone: "; cin >> students[i].phone;
        cout << endl;
    }

    sortByID(students, SIZE); // เรียกฟังก์ชันเรียงลำดับ

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE); // แสดงผลหลังเรียงลำดับ

    return 0;
}
