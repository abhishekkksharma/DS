#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Printer {
public:
    void print(int value) {
        cout << "Integer: " << value << endl;
    }

    void print(float value) {
        cout << "Float: " << value << endl;
    }

    void print(const string& value) {
        cout << "String: " << value << endl;
    }

    void print(const vector<int>& values) {
        cout << "Vector: ";
        for (int v : values) cout << v << " ";
        cout << endl;
    }

    void printStatus() const {
        cout << "Status: Printer is ready" << endl;
    }
};


int main() {
    Printer p;
    p.print(10);
    p.print(3.14f);
    p.print("Hello");
    p.print(vector<int>{1, 2, 3});
    p.printStatus();
}

