#include <iostream>
using namespace std;

int sumOfAll(int a){
    return a = a + sumOfAll(a - 1);
}

int main(){
    cout << sumOfAll(5) << endl;
}