#include <iostream>
using namespace std;

int main() {
    int arr1[]={3,2,8,9,5,3,4,6,9,2,1,8,3,9};
    int arr2[]={3,2,8,6};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int i=n1-1;
    int j=n2-1;
    int n3 = n1+n2;
    int ans[n3];

    while (i>=0 && j>=0)
    {
        int carry=0;
        if (arr1[i]+arr2[j]>10)
        {
            carry=1;
        }       
    }
    
    return 0;
}