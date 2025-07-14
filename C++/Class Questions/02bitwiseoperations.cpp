// Online C++ compiler to run C++ program online
#include <iostream>
int checkFirstone(int n){
    int ans =1;
    while(n%2!=1){
        n=n>>1;
        ans++;
    }
    return ans;
}
int main() {
    // Write C++ 
    int n;
    std::cout<<"Enter a number:\n";
    std::cin>>n;
    std::cout << checkFirstone(n);

    return 0;
}