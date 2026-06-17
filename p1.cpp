//create a class name distance that represents the distance in feet and inch
//it should have all the regular class properties including a member function that adds two objects

#include <iostream>

using namespace std;

class Distance
{
private:
    float feet, inch;
public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    Distance(float feet, float inch)
    {
        this->feet = feet;
        this->inch = inch;
    } 

    void setDistance(float f, float i)
    {
        feet = f;
        inch = i;
    }

    void showDistance()
    {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }

    static Distance add(Distance, Distance);

    ~Distance()
    {
        cout << "Destructor called" << endl;
    }
};

Distance Distance::add(Distance x, Distance y)
{
    float i = x.inch + y.inch;
    int carry = i / 12;
    float actual = i - (carry * 12);

    float f = carry + x.feet + y.feet;

    return Distance(f, actual);
}

int main()
{
    Distance a(12.5, 18.6);
    Distance b(6, 3.5);

    Distance c = Distance::add(a, b);

    c.showDistance();

    return 0;
}