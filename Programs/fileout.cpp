#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ifstream out("abc.txt");
    if(out){
        string a;
        out >> a;
        cout << a;
        out.close();
    }
    else
    {
        cout << "File doesn't exists.";
    }
    
}