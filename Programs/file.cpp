#include <iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream inp;
    inp.open("abc.txt", ios::trunc);
    inp << 23 << endl;
    inp.close();
    return 0;
}
