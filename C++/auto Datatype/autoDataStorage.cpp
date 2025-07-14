#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string api_call(){
    return "got some data from web\n";
}

int main() {
    auto response = api_call();
    cout<<"Api call value:"<<response;

    if(typeid(response)==typeid(string)){
        puts("Type of both Id matches\n");
    }
    return 0;
}