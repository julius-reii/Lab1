//wap a program to overload binary operator to find sum of complex numbers  (using frined function)

#include <iostream>

using namespace std;
class Complex
{
private:
    float real;
    float imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i):real(r), imaginary(i)
    {

    }

    void show()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    friend Complex operator+(Complex a, Complex b);

    ~Complex()
    {

    }
};

Complex operator+(Complex a, Complex b)
{
    Complex temp;

    temp.real = a.real + b.real;
    temp.imaginary = a.imaginary + b.imaginary;
    return temp;
}

int main()
{
    Complex c1(10, 15), c2(10, 10);

    Complex c3 = c1 + c2;

    c3.show();

    return 0;
}