#include <iostream>
using namespace std;
int main()
{
    int a=50;
    int b=20;
    int c;

    c=a;
    a=b;
    b=c;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
