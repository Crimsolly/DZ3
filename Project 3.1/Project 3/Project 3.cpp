

#include <iostream>
using namespace std;
int main()
//task1
{
    int a = 3, b = 1, c = 20, d = 30, x;
    float x = a * (b + (c / d));
    float x = a * (b + (static_cast <float>(c) / d));
    cout << x;
}
//task2
int main()
{
    int a = 10, b;
    b = (a <= 21) ? 21 - a : (a - 21) << 1; 
    cout << b;

}
//task3 
int main()
{
    int a[3][3][3], * pA, z;
    pA = &a[1][1][1];
    z = *pA;
    cout << "z=" << z;


}