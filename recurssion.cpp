#include <iostream>
using namespace std;

int factorial(int n){
    if( n == 0 || n == 1){
        return 1;
    }

    else{

    n = n * factorial(n - 1);
    return n;
}
}

int main(){
    cout << factorial(4) << endl;
    return 0;
}