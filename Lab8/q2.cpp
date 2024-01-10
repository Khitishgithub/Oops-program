#include <iostream>
using namespace std;
class Num
{
    int a, b, c, d;

public:
    void input()
    {
        cout << "Enter a :" << endl;
        cin >> a;
        cout << "Enter b :" << endl;
        cin >> b;
        cout << "Enter c :" << endl;
        cin >> c;
        cout << "Enter d :" << endl;
        cin >> d;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
    Num operator*(int t)
    {
        Num temp;
        temp.a = a * t;
        temp.b = b * t;
        temp.c = c * t;
        temp.d = d * t;
    }
};
int main()
{
    Num x, y;
    x.input();
    x.display();
    y = x * 3;
    y.display();
    return 0;
}