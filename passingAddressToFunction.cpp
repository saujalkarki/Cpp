#include<iostream>
using namespace std;

void swap(int*,int*);

int main(){
    int x, y;
    x=10;
    y=20;

    cout << "Before swap" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    swap(&x,&y);

    cout << "After swap"  << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void swap(int *a, int *b){
    int t;
    t = *a;
    *a=*b;
    *b=t;
}

