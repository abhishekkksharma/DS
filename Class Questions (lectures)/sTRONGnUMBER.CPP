#include <iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}

int main() {
    int n = 145;
    int temp = n, sum = 0;

    while(temp > 0){
        int digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }

    if(sum == n){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
