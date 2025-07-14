#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> as;
    as={1,2,3,4,5};
    for(int a: as){
        cout<< a<< " ";
    }
    return 0; 
}