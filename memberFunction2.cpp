// Defining member function inside the class definition
#include<iostream>
using namespace std;

class example{
    int number;
    float cost;

    public:
     void getData( int a, float b){
        number = a;
        cost = b;
     }
     void putData(){
        cout << "Number = " << number << endl;
        cout << "Cost = " << cost << endl;
     }
};

int main(){
    example x; //creating object x
    x.getData(100, 299.55);

    example y; //creating object y
    y.getData(200,175.50);

    cout << "Object x" << endl;
    x.putData();

    cout << "Object y" << endl;
    y.putData();
}