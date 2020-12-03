#include<iostream>
using namespace std;

int main(){
    int *ptr, c = 0;
    while (1){
        ptr = new int[20];
        cout << ++c << endl;
    }
}