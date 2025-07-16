#include <iostream>
using namespace std;

int main() {
    int arr1[]={3,8,12,13,17,20,22,44,800};
    int arr2[]={-3,-1,0,9,15,18,38};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int n3=n1+n2;

    int ans_array[n3];
    int i=0,j=0,k=0;  
    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            ans_array[k++]=arr1[i++];
        }
        else{
            ans_array[k++]=arr2[j++];
        }
    }
    if (i<n1)
    {
        while (i<n1)
        {
            ans_array[k++]=arr1[i++];
        }
    }
    if (j<n2)
    {
        while (j<n2)
        {
            ans_array[k++]=arr2[j++];
        }
    }
    printf("Merged and sorted array: ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ",ans_array[i]);
    }
    
    
    return 0;
}