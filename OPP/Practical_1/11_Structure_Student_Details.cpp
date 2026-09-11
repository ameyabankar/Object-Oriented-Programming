#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    Student s[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter name, roll number and marks of student " << i + 1 << ":\n";
        getline(cin >> ws, s[i].name);
        cin >> s[i].rollNo >> s[i].marks;
    }

    cout << "\nStudent Details:\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Roll No: " << s[i].rollNo << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}