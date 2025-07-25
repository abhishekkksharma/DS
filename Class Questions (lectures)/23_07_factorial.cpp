#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    unsigned long long check = factorial(n);
    if(check > 4875632875ULL) {
        cout << "out of range";
    } else {
        cout << check;
    }
    return 0;
}
