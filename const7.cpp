#include <iostream>
using namespace std;

class Student {
    int age;

public:
    
    Student();
    Student(int);
    Student(const  Student&);

    void display();
};


Student::Student() {
    age = 18;
}


Student::Student(int a) {
    age = a;
}


Student::Student(const Student& s) {
    age = s.age;
}


void Student::display() {
    cout << "Age = " << age << endl;
}

int main() {
    Student s1;      
    Student s2(20);    
    Student s3(s2);    

    s1.display();
    s2.display();
    s3.display();

    return 0;
}