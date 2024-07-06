// demonstrating scopeResolutaionOperator

#include <iostream>
using namespace std;

int a = 10;

int main()
{
    int a = 15;

    cout << "\n Local a = " << a << "\t Global a =" << ::a << endl;
    ::a = 20;
    cout << "\n Local a =" << a << "\t Global a =" << ::a << endl;
}