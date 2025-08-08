#include <iostream>
#include <string>
using namespace std;

class Company {
private:
    string name;

public:
    Company(const string& name) : name(name) {}

    class Employee {
    private:
        string empName;
        int id;
        Company& company;

    public:
        Employee(const string& name, int id, Company& c) : empName(name), id(id), company(c) {}

        void printDetails() const {
            cout << "Employee " << empName << " (ID: " << id << ") works at " << company.name << endl;
        }
    };
};

int main() {
    Company c("OpenAI");
    Company::Employee e("Alice", 101, c);
    e.printDetails();
}

