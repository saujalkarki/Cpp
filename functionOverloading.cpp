#include<iostream>
using namespace std;

int area(int);
double area(double ,int);
long area(long, int, int);

int main(){

cout << "The First Area is: " << area(10) << endl;
cout << "The Second Area is: " << area(2.5,8) << endl;
cout << "The Third Area is: " << area(100,75,15) << endl;


}

int area(int s){
    return (s*s);
}

double area(double r, int h){
    return (2*3.14*r*h);
}

long area(long l, int b, int h){
    return(2*(l*b+b*h+l*h));
}

