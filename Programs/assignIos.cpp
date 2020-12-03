#include<iostream>
#include<fstream>
using namespace std;

class Items
{
private:
    string name;
    int qty;
    float price;
public:
    Items(string n, int q, float p){
        name = n;
        qty = q;
        price = p;
    }
    Items(){}
    friend ofstream & operator<<(ofstream &out, Items &i){
        out << i.name << endl << i.price << endl  << i.qty << endl;
        return out;
    }
    friend ifstream & operator>>(ifstream &in, Items &i){
        in >> i.name >> i.price >> i.qty;
        return in;
    }
    friend ostream & operator<<(ostream &os, Items &i){
        os << "Name: " << i.name << endl;
        os << "Price: " <<  i.price << endl;
        os << "Quantity: " << i.qty << endl;
        return os;
    }
};

int main(){
    int n;
    cout << "Enter the number of items:- ";
    cin >> n;
    Items *list[n];
    string name;
    int qty;
    float price;
    for(int i = 0; i < n; i++){
        cout <<  "Product " << i + 1 << ": " << endl; 
        cout << "Enter name:- ";
        cin >> name;
        cout << "Enter quantity:- ";
        cin >> qty;
        cout << "Enter price:- ";
        cin >> price;
        list[i] = new Items(name, qty, price);
    }
    ofstream out("myfile.txt", ios::app);
    for (int i = 0; i < n; i++)
        out << *list[i];
    cout << "File has been written successfully." << endl << endl;
    Items item;
    ifstream in("myfile.txt");
    if (in)
    {
        for (int i = 0; i < n; i++)
        {
            in >> item;
            cout << "Item number " << i+1 << endl << item;
        }
        
    }    
    else
        cout << "File doesn't exists.";    
}
