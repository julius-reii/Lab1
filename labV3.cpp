//create a class Length that has two data members, meter and centimeter
// wap to compare the length of two objects of this class by over loading greater than operator
//use constructor to initialize necessary data members
//using friend function

#include <iostream>

using namespace std;

class Length
{
private:
    double meter;
    double centimeter;

public:
    Length()
    {
        meter = 0.0;
        centimeter = 0.0;
    }

    Length(double m, double cm):meter(m), centimeter(cm)
    {

    }

    void show()
    {
        cout << "Meter: " << meter << " Centimeter: " << centimeter << endl;
    }

    friend bool operator>(Length, Length);

    ~Length()
    {

    }
};

bool operator>(Length obj1, Length obj2)
{
    double l1 = obj1.meter + (obj1.centimeter / 100);
    double l2 = obj2.meter + (obj2.centimeter / 100);

    if (l1 > l2)
    {
        return true;
    }

    return false;
    }

int main()
{
    Length l1(5, 15), l2(5, 90);

    if (l1 > l2)
    {
        l1.show();
    }
    else
    {
        l2.show();
    }

    return 0;
}