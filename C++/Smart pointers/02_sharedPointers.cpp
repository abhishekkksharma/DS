#include <iostream>
#include <memory>
using namespace std;

class User{
public:
    User(){
        cout<<"User created\n";
    }
    ~User(){
        cout<<"User Destroyed\n";
    }
    void tesfunc(){
        cout<<"I am a test function\n";
    }
};

int main() {
    {
        // unique_ptr<User> sam(new User());  // non fav way of developers
        unique_ptr<User> sam=make_unique<User>();
        sam->tesfunc();

        // unique_ptr<User> samm = sam; //Not Allowed
    }
    {
        // shared_ptr<User> tim(new User());//allowed
        shared_ptr<User> tim = make_shared<User>(); //good practice
        shared_ptr<User> timm = tim;
    }
    
    cout<<"outside code";
    return 0;
}