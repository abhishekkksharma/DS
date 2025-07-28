#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    list<int> mylist;
    for(int i=3;i<=10;++i){
        mylist.push_back(i);
    }
    cout<<mylist.front()<<endl; // what value at begining 
    cout<<mylist.back()<<endl; // what value at end 

    mylist.pop_back(); //removes last element
    cout<<mylist.back()<<endl;
    mylist.reverse();
    for(auto i: mylist){
        cout<<i<<" ";
    }
    cout<< endl;
    mylist.sort();
    for(auto i: mylist){
        cout<<i<<" ";
    }
    return 0;
}