#include <iostream>
using namespace std;

class messi;
class ronaldo
{
private:
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    friend void sum(ronaldo, messi);
};
class messi
{
private:
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    friend void sum(ronaldo, messi);
};
void sum(ronaldo k, messi d)
{
    cout << "The sum of a and b is"
         << " " << k.a + d.b << endl;
}
int main()
{
    ronaldo a1;
    messi b1;
    a1.setdata(7);
    b1.setdata(30);
    sum(a1, b1);
}
