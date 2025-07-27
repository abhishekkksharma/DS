#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {3,5,2,7,8};
    cout<< "Unsorted values:"<<endl;
    for(int value : arr){
        cout<<value<< " ";
    }
    sort(arr,arr+5);
    // sort_heap(arr,arr+5);
    cout<< endl<< "Sorted values: "<<endl;
    for(int value : arr){
        cout<<value<< " ";
    }

    return 0;
}