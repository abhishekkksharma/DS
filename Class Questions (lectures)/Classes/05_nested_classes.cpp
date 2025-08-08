// // #include<iostream>
// // using namespace std;
// // class Outer{
// //     int a;
// //     public:
// //     Outer(int a){
// //         this->a=a;
// //     }
// //     void accessInner(){
// //         Inner innerObject(100);
// //         cout<<innerObject.getB()<<endl;
    
// //     }
    
// //     class Inner{
// //         int b;
// //         public:
// //         Inner(int b){
// //             this->b=b;
// //         }
// //         // Getter function
// //         int getB(){
// //             return b;
// //         }
// //     };
// // };

// // int main(){
// //     Outer outer(200);
// //     outer.accessInner();
// //     return 0;
// // }




// // #include<iostream>
// // using namespace std;
// // class Outer{
// //     int a;
// //     friend class Inner;
// //     public:
// //     Outer(int a){
// //         this->a=a;
// //     }
// //     void accessInner(){
// //         Inner innerObject(100);
// //         cout<<innerObject.getB()<<endl;
// //         cout<<innerObject.b<<endl;
    
// //     }
    
// //     class Inner{
// //         int b;
// //         friend class Outer;
// //         public:
// //         Inner(int b){
// //             this->b=b;
// //         }
// //         // Getter function
// //         int getB(){
// //             return b;
// //         }
// //         void accessOuter(Outer& o){

// //         }
// //     };
// // };

// // int main(){
// //     Outer outer(200);
// //     outer.accessInner();
// //     return 0;
// // }



// // #include <iostream>
// // using namespace std;

// // class Outer{
// //     int i;
// //     public:
// //     Outer(int i) {
// //         this->i = i;
// //     }

// //     void accessInner() {
// //         Inner obj(100);
// //         cout << obj.getJ() << endl;
// //         cout << obj.j;
// //     }

// //    class Inner{
// //     int j;
// //     public:
// //         Inner(int j) {
// //             this->j = j;
// //         }
        
// //         int getJ() {
// //             return j;
// //         }

// //         void accessOuter(Outer& obj) {
// //             cout << obj.i << endl;
// //         }

// //         friend class Outer; 
// //     };
// // };

// // int main() {
// //     Outer outer(200);
// //     outer.accessInner();
// //     Outer::Inner inner(300);
// //     inner.accessOuter(outer);
// //     return 0;
// // };


// ////make outer class friend of inner class
// #include <iostream>
// using namespace std;

// class Outer{
//     int i;
//     public:
//     Outer(int i) {
//         this->i = i;
//     }

//     void accessInner() {
//         Inner obj(100);
//         cout << obj.getJ() << endl;
//         cout << obj.j;
//     }

//    class Inner{
//     int j;
//     public:
//         Inner(int j) {
//             this->j = j;
//         }
        
//         int getJ() {
//             return j;
//         }

//         void accessOuter(Outer& obj) {
//             cout << obj.i << endl;
//         }

//         friend class Outer; 
// };

// int main() {
//     Outer outer(200);
//     outer.accessInner();
//     Outer::Inner inner(300);
//     inner.accessOuter(outer);
//     return 0;
// };

// static int innerData:
// public:
// void accessOuter(){
//     cout<<Outer::outerData<<endl;
// };
// int Outer::outerData=999;
// int Outer::Inner::innerData=111;

// int main(){
//     outer o;
//     o.accessInner();
//     Outer::Inner i;
//     i.acessOuter();
// }