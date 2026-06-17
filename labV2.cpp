//create a class Length that has two data members, meter and centimeter
// wap to compare the length of two objects of this class by over loading greater than operator
//use constructor to initialize necessary data members

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

    bool operator>(Length obj)
    {
        double l1 = this->meter + (this->centimeter / 100);
        double l2 = obj.meter + (obj.centimeter / 100);

        if (l1 > l2)
        {
            return true;
        }

        return false;
    }

    ~Length()
    {

    }
};

int main()
{
    Length l1(15, 15), l2(5, 90);

    if (l1 > l2)
    {
        cout << "Length 1 is greater" << endl;
        l1.show();
    }
    else
    {
        cout << "Length 2 is greater" << endl;
        l2.show();
    }

    return 0;
}