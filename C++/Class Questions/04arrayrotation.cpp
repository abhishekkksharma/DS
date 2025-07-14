#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, 1, 8, 9, 2};
    int temp[6];
    int size = 6;
    int i=2;
    int k=0;
    for (int j = size-1; j >= i; j--)
    {
        temp[k++]=arr[j];
    }
    for (int m = 0; m <= i; m++)
    {
        temp[k++]=arr[m];
    }
    for (int n = 0; n < size; n++) {
        cout << temp[n] << " ";
    }
    return 0;
}
