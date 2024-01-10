#include <iostream>
using namespace std;
class Area
{
    int l, a, b;
    float r, h;

public:
    Area(int x, float y)
    {
        l = x;
        b = y;
        cout << "The area of traingle is " << 0.5 * x * y << endl;
    }

    Area(float x)
    {
        r = x;
        cout << "The area of circle is " << 3.14 * r * r << endl;
    }
    Area(int x)
    {
        a = x;
        cout << "The arae of square is " << a * a << endl;
    }
    Area(int p, int q, float r)
    {
        a = p;
        b = q;
        h = r;
        cout << "The area of trapizium is" << 0.5 * h * (a + b) << endl;
    }
};
int main()
{
    Area a1(5, 6.0f);
    Area a2(7.0f);
    Area a3(5);
    Area(3, 4, 6.0f);

    return 0;
}