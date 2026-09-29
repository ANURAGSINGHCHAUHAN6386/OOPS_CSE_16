#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Normal constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(Student &s) {
        age = s.age;
    }
};

int main() {

    Student s1(20);   // s1 ki age = 20

    Student s2(s1);   // s1 ko copy karke s2 banaya

    cout << s1.age << endl;
    cout << s2.age << endl;

    return 0;
}