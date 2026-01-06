// C++
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;   // TODO 1: Add studentID field
    string nickname;    // TODO 1: Add nickname field
};

int main() {
    Student s1;
    Student* p = nullptr;
    // TODO 2: Use pointer p to point to s1
    p = &s1;
    // TODO 3: Assign values using p->
    p->studentID = "6711800004";
    p->nickname = "NINE";
    // TODO 4: Display values using p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;
    return 0;
}
