#include <iostream>

using namespace std;

//----------Problem 1---------------//
void passValue(int val){
   val = 10;
   cout << "val = "<< val << endl ;
}
void passRef(int &ref){
   ref = 20;
   cout << "ref = " << ref << endl;
}
void passPtr(int *ptr){
    //pass in dereference value
    *ptr = 30;

    cout << " *ptr = " << *ptr << endl;
}

//----------Problem 2---------------//
//the Difference Between Pass By Pointer and Pass By Pointer Reference (int * and int * &)
int box1= 1;
int box2 =2;
int *pointer1;

//pass by pointer
void passbyPointer(int *ptr){
    *ptr = 3;
    ptr = pointer1;
    *ptr = 4;
    cout << "passbyPtr has been called." << endl;

}
//passbyPointerRefernce
void passbyPointerRefernce( int * &ptrRef){

   *ptrRef = 5;
   ptrRef = pointer1;
   *ptrRef = 6;

    cout << "passbyReference  has been called." << endl;
}


int main(int argc, char* argv[]) {

    //----------Problem 1---------------//
 int x = 5;

 passValue(x);
 cout << "x = " <<  x << endl; //x = 5
 passRef(x);
 cout << "x = " << x  << endl; // x = 20
 int * xptr = &x;
 passPtr(xptr);
    cout << "x = " << *xptr << endl; //*ptr = 30



    //----------Problem 2---------------//

    //create a integer pointer
    int* p = & box1;
    pointer1 = & box2;

   //  passbyPointer(p);
    passbyPointerRefernce(p);

    cout << "-----Current Condition--------" << endl;

    if(p == &box1){
        cout << "p is pointing to box1" << endl;
    } else if(p == &box2){
        cout << "p is pointing to box2" << endl;
    } else { cout << "p is pointing to another box" << endl;}

    if(pointer1 == &box1){
        cout << "p1 is pointing to box1" << endl;
    } else if(pointer1 == &box2){
        cout << "p1 is pointing to box2" << endl;
    } else { cout << "p1 is pointing to another box" << endl;}

    cout << "box1 contains the value: " << box1 << endl;
    cout << "box2 contains the value: " << box2 << endl;


    return 0;
}