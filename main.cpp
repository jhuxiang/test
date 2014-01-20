#include <iostream>
using namespace std;

int main()
{
    int a = 0, b;
    double r, pi, s;
    cout << a << "  " << b << endl;
    b = 50;
    a = b + 50;
    cout << a << "  " << b << endl;
    b = a*b;
    a = a / 3;
    cout << a << "  " << b << endl;
    r = 2.5;
    pi = 3.14;
    s = 2*pi*r;

    cout << "Length is " << s << endl;
    cout << "Area is " << pi*r*r<< endl;

    return 0;
}
