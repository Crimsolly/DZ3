
#include <iostream>
using namespace std;
//task 1
int main()
{
    int a, b, c;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    c = a + b;

    if ((a + b >= 10) && (a + b <= 20))
    {
        cout << "c=" << c << " True.";
    }
    else
    {
        cout << "c=" << c << " False.";
    }
    return 0;
}
//task 2
int main()
{
    const int a, b;
        int c;
        cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    c = a + b;

    if (a == 10 && b == 10) || (a + b == 10)
    {
        cout << "c=" << c << " True.";
    }
    else
    {
        cout << "c=" << c << " False.";
    }
    return 0;
}
//task 3
int main()
{
    int i = 1, b;
    for (i = 1; i <= 50; i += 2)
    {
        cout << "Your numbers i= " << i << " \n";
    }
    return 0;
} 
//task 4
int main()
{
    
        int v;
        cout << "v="; cin >> v;
        


        if ((v % v == 0) || (v % 1 == 0))
        {
            cout << "v=" << v << " Excellent. This number is prime!";
        }
        else if (v % 1 != 0)
        {
            cout << "v=" << v << " This number doesn't fit. Try again.";
        }
        return 0;
    




}
//не успел сделать
int main()
{




}