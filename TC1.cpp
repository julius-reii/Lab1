//create a class name rect that represents rectangular / cartisian coordinate x,y
//create another class name polar that represents polar coordinates in terms of r and theta
//convert the datatype rect into polar using destination type conversion 
//without using friend function or friend class

#include <iostream>
#include <cmath>
using namespace std;

class Polar;
class Rect;

class Rect
{
private:
    float x;
    float y;

public:
    Rect()
    {
        x = 0;
        y = 0;
    }

    Rect(float a, float b):x(a), y(b){}

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void show()
    {
        cout << x << ", " << y << endl;
    }

    operator Polar();
    ~Rect(){}


};

class Polar
{
private:
    float r;
    float theta;

public:

    Polar()
    {
        r = 0;
        theta = 0;
    }

    Polar(float a, float b):r(a), theta(b){}

    /* Polar (Rect& a) //Destination class conversion
    {
        r= sqrt((a.getX() * a.getX()) + (a.getY() * a.getY()));
        theta = atan2(a.getY(), a.getX());
    } */

    void show()
    {
        cout << r << ", " << theta << endl;
    }

    ~Polar(){}


};


Rect::operator Polar() // source class conversion
{
    float radius = sqrt(pow(x, 2) + pow(y,2));
    float theta = atan2(y, x);

    return Polar(radius, theta);
}

int main()
{
    Rect r(10, 10);

    r.show();
    Polar p = r;

    p.show();


    return 0;


}