#include <iostream>
#include <string>
using namespace std;

class Product{
private:    
    int _productID;
    string _productName;
    float _productPrice;
public:
Product(int _productID,string _productName,float _productPrice){
    this->_productID = _productID;
    this->_productName = _productName;
    this->_productPrice = _productPrice;
}
    void displayProductDetails(){
        cout<< "product id:"<<_productID<<endl<< "product name:"<<_productName<<endl<<"Product price:"<<_productPrice<<endl;
    }
};

class Book{
private:
    int bookId;
    string bookName;
    string bookAuthor;
public:
    Book(int bookId,string bookName,string bookAuthor){
        this->bookId = bookId;
        this->bookName = bookId;
        this->bookAuthor = bookId;
    }
    void displaBookDetails(){
        cout<<bookId<<endl<<bookName<<endl<<bookAuthor<<endl;
    }

};
int main() {
    Book b1(1001, "Book1","Yugti");
    Book b2(1002, "Book2","Aman");
    b1.displaBookDetails();
    b2.displaBookDetails();
    return 0;
}

