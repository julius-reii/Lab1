//create a class name distance that represents the distance in feet and inch
//it should have all the regular class properties including a member function that adds two objects
//write a friend function that adds two objects

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

    float getFeet(){return feet;}
    float getInch(){return inch;}

    Distance add(Distance);
    Distance addY(Distance, Distance);
    friend Distance add(Distance, Distance);

    ~Distance()
    {
        cout << "Destructor called" << endl;
    }
};

Distance Distance::add(Distance y)
{
    float i = this->inch + y.inch;
    int carry = i / 12;
    float actual = i - (carry * 12.0);

    float f = carry + this->feet + y.feet;

    return Distance(f, actual);
}

Distance add(Distance x, Distance y) //friend function (global function that can access the private datamembers of the class)
{
    float i = x.inch + y.inch;
    int carry = i / 12;
    float actual = i - (carry * 12);

    float f = carry + x.feet + y.feet;

    return Distance(f, actual);
}

Distance addY(Distance x, Distance y) //without using friend function, getter funciton, doesnt need to be friend with the class
{
    float i = x.getInch() + y.getInch();
    int carry = i / 12;
    float actual = i - (carry * 12);

    float f = carry + x.getFeet() + y.getFeet();

    return Distance(f, actual);
}


int main()
{
    Distance a(12.5, 18.6);
    Distance b(6, 3.5);

    Distance c = add(a, b);

    c.showDistance();

    return 0;
}