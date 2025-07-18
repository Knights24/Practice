#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;

}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n- 1;i++){
        int min_val = i;
        for(int j = i + 1; j < n; j++){

        

        }



    };

}