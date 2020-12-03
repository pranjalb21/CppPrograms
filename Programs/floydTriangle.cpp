#include<iostream>
using namespace std;

int main(){
    int n, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++){
            if(p < 10)
                cout << p++ << "   ";
            else if (p < 99)
                cout << p++ << "  ";
            else            
                cout << p++ << " ";
        }
            
        cout << endl;        
    }
    
}