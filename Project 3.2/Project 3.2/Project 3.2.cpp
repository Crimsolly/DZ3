
#include <iostream>
using namespace std;
extern int a;
extern int b;
extern int c;
extern int d;

int main()
{
    int x;
    float x = a * (b + (static_cast <float>(c) / d));
    cout << "x=" << x;
    return 0;
}


