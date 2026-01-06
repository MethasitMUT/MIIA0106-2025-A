#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1: Add fields: id, nickname, lineId, phone
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    Student s1; // Single struct variable

    cout << "=== Input Student 1 ===\n";
    // TODO 2: Receive input from user into s1
    cout << "Enter ID: ";
    cin >> s1.id;
    cout << "Enter Nickname: ";
    cin >> s1.nickname;
    cout << "Enter Line ID: ";
    cin >> s1.lineId;
    cout << "Enter Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO 3: Display data from s1
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "Phone: " << s1.phone << endl;

    return 0;
}