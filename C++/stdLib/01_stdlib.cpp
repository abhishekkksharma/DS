#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Corners{
    float a,b,c,d;
    
};
int main() {
    vector<int> inty;
    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);
    for (auto i = inty.begin(); i < inty.end() ; i++)
    {
        cout<< *i<<endl;
    }
    
    return 0;
}