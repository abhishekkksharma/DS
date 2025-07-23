#include <iostream>
using namespace std;

class Calculator {
public:
    int Add(int a, int b) {
        return a + b;
    }

    int Sub(int a, int b) {
        return a - b;
    }

    int Mul(int a, int b) {
        return a * b;
    }

    double Divide(int a, int b) {
        return a/ b;
    }

    int Mod(int a, int b) {
        return a % b;
    }
};

int main() {
    Calculator c;
    cout << c.Add(2, 6) << endl;
    cout << c.Sub(2, 6) << endl;
    cout << c.Mul(2, 6) << endl;
    cout << c.Divide(8, 6) << endl;
    cout << c.Mod(8, 6) << endl;
    return 0;
}
