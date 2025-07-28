#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numbers[6] = {1, 6, 5, 3, 4, 2};

    // Sort the array before binary search
    // works only on sorted array;
    sort(numbers, numbers + 6);
    
    if (binary_search(numbers, numbers + 6, 2)) {
        cout << "Number found" << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
