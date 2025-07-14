#include <iostream>

struct User{
    const int id;
    int age;
    User() : id(001), age(20){} // initializing the values
};

int main() {
    using namespace std; // this can also be used in main
    // stack 
    int score = 100;
    User mike;

    // Heap
    int* heap_score = new int;
    *heap_score = 200;
    User* nike = new User();

    // make sure you free/delete the manually created memory with the  
    delete heap_score;
    delete nike;
    return 0;
}