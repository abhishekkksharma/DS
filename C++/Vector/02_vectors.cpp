#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    vector<string> heros {"batman","spidrman","flash","superman"};
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for(int i=0;i<=5;i++){
        nums.push_back(i);
    }
    cout << nums.size() << endl;        // Current size of vector
    cout << nums.capacity() << endl;    // Current allocated capacity
    cout << nums.max_size() << endl;    // Max elements vector can hold
    
    cout<<nums.empty()<<endl; //0- not empty , 1-empty

    for(auto i= nums.begin(); i !=  nums.end();++i){
        cout<< *i<< " ";
    }
    return 0;
}