#include <iostream>
#include <string>
using namespace std;

#define console_log(a) cout<< a << endl // not really suggested
#define END return 0;
#define ENDMESSAGE cout<< "This is the end messge";
int main() {
    int score = 400;
    console_log(score);
    ENDMESSAGE
    END
}