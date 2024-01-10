#include <iostream>
using namespace std;

class A
{
public:
    int m;
    A(int a)
    {
        m = a;
    }

    bool operator<(A obj)
    {
        if (m < obj.m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator<=(A obj)
    {
        if (m <= obj.m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    A p(2);
    A o(3);
    A c(2);

    bool a = (p < o);
    bool b = (p <= c);
    cout << a << b << endl;
}