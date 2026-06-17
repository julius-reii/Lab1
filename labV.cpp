//wap a program to overload binary operator to find sum of complex numbers  (uisng member function)

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

    Complex operator+(Complex r)
    {
        Complex temp;

        temp.real = this->real + r.real;
        temp.imaginary = this->imaginary + r.imaginary;
        return temp;
    }

    ~Complex()
    {

    }
};


int main()
{
    Complex c1(10.5, 15), c2(10, 5);

    Complex c3 = c1 + c2;

    c3.show();

    return 0;
}