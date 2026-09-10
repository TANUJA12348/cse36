#include <iostream>
#include <string>
using namespace std;

class Student {
    int r;
    string name;

public:
    inline void getdata(int r1, string n1);
    void display();
};

inline void Student::getdata(int r1, string n1) {
    r = r1;
    name = n1;
}

void Student::display() {
    cout << "Roll No: " << r << endl;
    cout << "Name: " << name << endl;
}

int main() {
    int r2;
    string n2;

    cout << "Enter Roll No and Name: ";
    cin >> r2 >> n2;

    Student S;
    S.getdata(r2, n2);
    S.display();

    return 0;
}
