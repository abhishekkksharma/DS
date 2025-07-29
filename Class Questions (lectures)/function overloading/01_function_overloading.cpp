#include <iostream>
using namespace std;

class Overloading {
public:
    void add() {}

    void add(int a, int b) {
        cout << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << a + b + c << endl;
    }

    void add(double a, double b) {
        cout << a + b << endl;
    }

    void add(double a, double b, double c) {
        cout << a + b + c << endl;
    }
};

int main() {
    Overloading A;
    A.add(1, 2, 4);           
    A.add(1, 2);              
    A.add(1.1, 1.2);          
    A.add(1.1, 1.2, 1.3);     
    return 0;
}
