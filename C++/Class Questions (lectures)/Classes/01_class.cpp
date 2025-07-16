#include <iostream>
#include <string>

using namespace std;
class Car{
    // member variables
    // object variables
    // instance variables 
    // family members:  //All same
private:
    string _model;
    string _comapny;
    int _manfYear;
    string _Transmition;
public:    
    int MaxSpeed; 
    void setModel(string modelname){ _model = modelname; };
    void getModel(){ cout<< _model<<endl;};
};

int main() {
    Car Brezza;
    Brezza.MaxSpeed = 180;
    Brezza.setModel("Brezza") ;
    Brezza.getModel();
    cout<< sizeof(Car);
    return 0;
}