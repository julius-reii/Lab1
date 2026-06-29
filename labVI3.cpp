//2 class radian and grad, convert object of one class to another

#include <iostream>
#include <cmath>
using namespace std;

class Grad;
class Rad;

class Rad
{
private:
    float rad;
public:
    Rad()
    {
        rad= 0;
    }

    Rad(float r):rad(r){}

    void show() const
    {
        cout << "Radian: " << rad << endl;
    }

    operator Grad();
    ~Rad(){}
};

class Grad
{
private:
    float grad;
public:
    Grad()
    {
        grad= 0;
    }

    Grad(float r):grad(r){}

    void show() const
    {
        cout << "Gradian: " << grad << endl;
    }
    ~Grad(){}
};

Rad::operator Grad()
{
    return (this->rad*200) / M_PI;
}

int main()
{
    Rad a(10);
    a.show();

    Grad b = a;

    b.show();

    return 0;
}
