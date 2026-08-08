# include <iostream>
using namespace std;
class student {
    public:
    string name;
    int roll_no;
    string grade;
};

int main ( ) {
    student s1;
    s1.name="Tanuja";
    s1.grade="A";
    s1.roll_no=131;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll_no << endl;
    cout << "Grade: " << s1.grade << endl;
    return 0;

}






























