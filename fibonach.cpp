#include <iostream>
using namespace std;

int sumOfall(int a){
    return a = a + sumOfall(a - 1);
}

int main(){
    cout << sumOfall(5) << endl;
}
