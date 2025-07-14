#include <iostream>
using namespace std;
int checPrimeNumber(int x){
    if (x<=1){
        return 0;
    }
    for (int i = 2; i*i <= x; i++)
    {
        if(x%i==0){
            return 0;
        }
    }
    return 1;

}

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if(checPrimeNumber(i)){
            printf("%d \n",i);
        }
    }
    
    return 0;
}