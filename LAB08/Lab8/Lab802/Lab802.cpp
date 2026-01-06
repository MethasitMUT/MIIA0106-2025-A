#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) Add fields: id, nickname, lineId, phone
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array of struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO 2) Receive input for 5 students into students[i]
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineId;
        cout << "Enter Phone: ";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO 3) Display data for all 5 students
        cout << "Student " << (i + 1) << ":" << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "Line ID: " << students
[i].lineId << endl;
        cout << "Phone: " << students[i].phone << endl;
		cout << "------------------------" << endl;
	}

	return 0;
}