#include <iostream>
using namespace std;

enum Msoffice{
    BOLD =5,
    ITALICS,
    Underline,
    cossed
    /// The values of ITALICS, Underline .. are auto incremented
    // so the Underline = 7;
    // But you can also define the values of each thing in enum 
};

int main() {
    int myAttributes = Underline;
    cout<< myAttributes;
    return 0;
}