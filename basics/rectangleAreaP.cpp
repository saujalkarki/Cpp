#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int length, breadth;
    int perimeter, area;

    // taking the input
    cout << "Length=";
    cin >> length;
    cout << "breadth=";
    cin >> breadth;

    // calculating perimeter and area
    perimeter = 2 * (length + breadth);
    area = length * breadth;

    // displaying the output
    cout << "Perimeter is " << perimeter << endl;
    cout << "Area is " << area << endl;
}