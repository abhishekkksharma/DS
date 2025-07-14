#include <iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5,6};
    for(int x : array){
        cout<< x<< " ";
    }
    return 0;
}