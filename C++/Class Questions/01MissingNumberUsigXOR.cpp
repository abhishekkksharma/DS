#include <iostream>
using namespace std;

int main() {
    int n=10;
    int arr[] = {1,2,3,4,6,7,8,9,10};
    int missingNumber=0;

    for (int i = 1; i <=n; i++)
    {
        missingNumber=missingNumber^=i;
    }
    for (int i = 0; i < n-1; i++)
    {
        missingNumber=missingNumber^arr[i];
    }
    cout<<missingNumber<<endl;
    
    
    return 0;
}