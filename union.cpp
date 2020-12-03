#include <iostream>
using namespace std;

union student
{
    int id;
    int roll;
};

int main()
{
    student m;
    m.id = 2;
    m.roll = 4;
    cout << m.id << endl << m.roll;
    return 0;
}
