// passing arguments to function by value

#include<iostream>

using namespace std;

void swap(int, int); // decleration 

int main(){

      int x, y;
    x=10;
    y=20;


    cout << "Before swap" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    swap(x, y); //funtion call


}

void swap(int a, int b){ //definition
    int t;
    t = a;
    a=b;
    b=t;

    cout << "After swap"  << endl;
    cout << "x = " << a << endl;
    cout << "y = " << b << endl;
    
}