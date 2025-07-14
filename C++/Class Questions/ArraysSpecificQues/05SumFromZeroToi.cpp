#include <iostream>
using namespace std;

int main() {
    int arr[]={-3,8,4,2,-5,0,-8,17,18,-3};
    int n=sizeof(arr)/sizeof(int);
    int ps[n];
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            ps[i]=arr[i];
        }
        else{
            ps[i]=ps[i-1]+arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ps[i]);
    }
    //Output: -3 5 9 11 6 6 -2 15 33 30
    
    return 0;
}