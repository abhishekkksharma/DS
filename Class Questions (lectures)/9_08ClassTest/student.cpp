#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int studentID;
    static int studentCount;
    static int nextID;

public:
    Student() : name("Unknown"), age(0), studentID(nextID++) {
        studentCount++;
    }

    Student(const string& name, int age) : name(name), age(age), studentID(nextID++) {
        studentCount++;
    }

    ~Student() {
        studentCount--;
    }

    static int getStudentCount() {
        return studentCount;
    }
};

int Student::studentCount = 0;
int Student::nextID = 1;


int main() {
    Student s1("Alice", 20);
    Student s2;
    cout << Student::getStudentCount() << endl; 
}

