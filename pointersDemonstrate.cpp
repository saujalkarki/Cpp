#include<iostream>
using namespace std;

int demonstrate(){
    int var = 20; 

    int*ptr;
    // *ptr is a pointer
   
    ptr= &var;

    cout << "value at ptr = " << ptr << endl;
    cout << "value at var = " << var << endl;
    cout << "value at *ptr = " << *ptr << endl;

    return 0;
}

int main(){
    demonstrate();
}
