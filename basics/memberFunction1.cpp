// Defining member function outside the class definition

#include<iostream>
using namespace std;

class Box{
    public: 
    double length;
    double breadth;
    double height;

    // member function decleration 
    double getVolume(void);
    void setData(double len, double bre, double hei);

};

//Member function definition 
double Box :: getVolume(void){
    return length*breadth*height;
}; 

void Box :: setData(double len, double bre, double hei){
    length = len;
    breadth = bre;
    height =hei;
}

// Main function 
int main(){
    Box Box1; //Declared Box1 of type Box
    double volume = 0.0;

    // box1 specification
    Box1.setData(6.0,7.0,5.0 );

    volume= Box1.getVolume();
    cout << "Volume of Box1 = " << volume << endl;
}