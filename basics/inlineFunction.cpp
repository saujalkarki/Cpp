#include<iostream>
using namespace std;

inline int max(int x, int y){
    return (x>y?x:y);
}

int main(){
    int a, b;

    cout << "Enter two values: a and b" << endl;
    cin >> a >> b ;
    cout << endl ;
    cout << "The greater number is: " << endl;
    cout << max(a, b) << endl;

}