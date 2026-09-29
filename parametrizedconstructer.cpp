#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) { // isme parameter diye hote hai
        age = a;
    }
};

int main() {
    Student s1(20);

    cout << s1.age;
}