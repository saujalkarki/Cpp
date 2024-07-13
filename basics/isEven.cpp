#include <iostream>

using namespace std;

bool isEven (int n);

int main(){

if (isEven(7)){
    cout << "7 is not an Even." << endl;
}else{
    cout << "7 is an Even." << endl;
} ;

    return 0;
}

bool isEven(int n){
    if(n<=1)
    return false;
    
for(int i =2; i<=(n/2);i++){
    if(n% i ==0)
    return false;
}    
return true;

}