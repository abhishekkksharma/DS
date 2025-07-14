#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int *a,int *b){
    // a=10, b=20;
    *a=*a+*b; // a=30
    *b=*a-*b; // b=10;
    *a=*a-*b; //a=20;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = (sizeof(arr) / sizeof(arr[0])) - 1;

    while (i < j) {
        // swap(&arr[i], &arr[j]);
        // same as 
        swap2(&arr[i], &arr[j]);
        i++;
        j--;
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
