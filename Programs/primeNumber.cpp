#include<iostream>
using namespace std;
int main(){
    int n, f = 0;
    cin >> n;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            f = 1;
            break;
        }
    }
    if (f==1)
        cout << "Not Prime";
    else
        cout << "Prime";
}