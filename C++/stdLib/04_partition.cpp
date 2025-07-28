#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkeven(int x){
    if(x%2==0) return true;
    return false;
}

int main() {
    vector<int> myints = {1,2,3,4,5,6,7,8,9,10};
    for(int x : myints){
        cout<<x<<" ";
    }
    cout<<endl;
    stable_partition(myints.begin(),myints.end(),checkeven);
    for(int x : myints){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}