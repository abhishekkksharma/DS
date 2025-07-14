#include <iostream>
#include <string>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
public:
    Phone(); // default constructor
    // Phone(const string & name, const string & os, const int & price ); //parameter constructor
    // Phone(const Phone &); //copy constructor
    string getName(){ return _os;} 
    // ~Phone(); // destructor
};

Phone::Phone() : _name(), _os(), _price(){
    puts("Default constructor");
}

int main() {
    Phone SamsungA1;
    cout<< SamsungA1.getName()<<endl;
    return 0;
}