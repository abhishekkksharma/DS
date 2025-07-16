#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int arr[]={3,-4,5,8,12,15};
    int target=13;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    bool isAnsFound=false;
    sort(arr, arr + n); // time complexity - O(nlogn)
    while (i!=j){   // time complexity O(n)
        if(arr[i]+arr[j]==target){
            printf("%d %d",arr[i],arr[j]);
            isAnsFound = true;
            break;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }else if(arr[i]+arr[j]>target){
            j--;
        }
    }
    if(isAnsFound==false){
        printf("Target not found");
    }

    // Total time complexity - O(nlogn + n)
        
    return 0;
}