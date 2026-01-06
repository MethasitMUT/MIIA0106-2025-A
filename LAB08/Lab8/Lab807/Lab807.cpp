// C++
#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

int main() {
    Student s;

    // รับข้อมูลนักศึกษา
    cout << "Enter Student ID: ";
    getline(cin, s.id);
    cout << "Enter Nickname: ";
    getline(cin, s.nickname);
    cout << "Enter Line ID: ";
    getline(cin, s.lineId);

    // รับข้อมูลเบอร์โทรนักศึกษา
    cout << "Enter Student's Mobile Number: ";
    getline(cin, s.myContact.mobile);
    cout << "Enter Student's Home Number: ";
    getline(cin, s.myContact.home);

    // รับข้อมูลผู้ปกครอง
    cout << "Enter Parent's Name: ";
    getline(cin, s.myParent.name);
    cout << "Enter Relationship: ";
    getline(cin, s.myParent.relationship);

    // รับข้อมูลเบอร์โทรผู้ปกครอง
    cout << "Enter Parent's Mobile Number: ";
    getline(cin, s.myParent.contact.mobile);
    cout << "Enter Parent's Home Number: ";
    getline(cin, s.myParent.contact.home);

    // แสดงผล 4 หัวข้อ
    cout << "\n===== Student Data =====\n";
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;

    cout << "\n===== Student's Contact Info =====\n";
    cout << "Mobile: " << s.myContact.mobile << endl;
    cout << "Home: " << s.myContact.home << endl;

    cout << "\n===== Parent Data =====\n";
    cout << "Name: " << s.myParent.name << endl;
    cout << "Relationship: " << s.myParent.relationship << endl;

    cout << "\n===== Parent's Contact Info =====\n";
    cout << "Mobile: " << s.myParent.contact.mobile << endl;
    cout << "Home: " << s.myParent.contact.home << endl;

    return 0;
}
