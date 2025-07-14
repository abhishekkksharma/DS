#include <iostream>
#include <string>
using namespace std;

class User{
private:// by default it is private only 
    int _secret =  22;
public:
    string name = "default";
    void classMessage();
    void setSecret(const int &newsecret){_secret = newsecret;}
    int getSecret() const;
};

void User::classMessage(){
    cout<<"Class is great,"<< name<<endl;
}
int User::getSecret() const{
    return _secret;
}

int main() {
    //creating an object
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);
    cout << sam.getSecret()<<endl;

    //completely diffrent object
    User Abhishek;
    Abhishek.classMessage();
    Abhishek.name = "Abhishek";
    Abhishek.classMessage();

    User rock;
    cout<< rock.getSecret()<< endl;

    return 0;
}