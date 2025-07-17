#include <iostream>
using namespace std;

class Rectanle{
    double _length;
    double _breadth;
public:
    Rectanle(double l=2.0,double b=2.0){
        _length=l;
        _breadth=b;
    }
    double area(){
        return _length*_breadth;
    }
    int compare(Rectanle rectanlge){
        return this->area()> rectanlge.area(); // here we are comparing our passed rectanle if it is greater than the existing rectangle(on which operation is being performed)
    }
};

int main() {
    Rectanle h1(3.0, 3.0);
    Rectanle h2(4.0, 4.0);


    // comparing our h1 object with other object h2 
    if (h1.compare(h2)) // comparing if h1 is greater than h2 by function call
    {
        cout<< "H2 is smaller";
    }else{
        cout<< "H1 is greater";
    }
    
    return 0;
}