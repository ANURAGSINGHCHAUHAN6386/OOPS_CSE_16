#include <iostream>
using namespace std;

class Student {
public:
    Student() {    //isme paramatere nhi diye hote hai
        cout << "Student object create hua";
    }
};

int main() {
    Student s1;
}