// #include <iostream>
// #include <string>
// using namespace std;

// struct Employee{
//     int Id;
//     string name;
//     string dept;
//     // you can have functions in struct in c++ but not in c
//     void setData(int Id,string name,string dept){
//         this->Id=Id;
//         this->name=name;
//         this->dept=dept;
//     }
//     void getData(){
//         cout<<"Employee Id:"<<Id<<" Name: "<<name<<" Department:"<<dept<<endl;
//     }
// };

// int main() {
//     Employee el;
//     el.setData(1001,"Abhishek","CS");
//     el.getData();
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int Id;
    string name;
    string dept;

    // Constructor
    Employee(int Id, string name, string dept) {
        this->Id = Id;
        this->name = name;
        this->dept = dept;
    }

    void getData() {
        cout << "Employee Id: " << Id << " Name: " << name << " Department: " << dept << endl;
    }
};

int main() {
    Employee el(1001, "Abhishek", "CS");
    el.getData();
    return 0;
}
