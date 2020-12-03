#include<iostream>
using namespace std;

int sumOfNNaturalNumber(int n){
    if(n > 0)
        return (n + sumOfNNaturalNumber(n - 1));
    else
        return 0;
    
}
int main(){
    int n;
    cin >> n;
    int result = sumOfNNaturalNumber(n);  
    cout << result;  
}