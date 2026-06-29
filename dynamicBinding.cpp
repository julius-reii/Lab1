//create a class name Set and create a function named draw which simply displays draw
//derive four class named circle, rectangle, triangle and square
//it should have a function named show which should display circle drawn, rectangle drawn and so on
//now emplement the concept of virtual function to call the function of derived class using base class pointer
//and implement the concept of virtual destructor

#include <iostream>

using namespace std;

class Set
{
public:
    virtual void draw()
    {
        cout << "drawn" << endl;
    }

    virtual ~Set(){cout << "Base class destructor" << endl;}
};

class Circle:public Set
{
public:
    void draw()
    {
        cout << "Circle Drawn" << endl;
    }

    ~Circle(){cout << "Circle Destructor" << endl;}
};

class Rectangle:public Set
{
public:
    void draw()
    {
        cout << "Rectangle Drawn" << endl;
    }

    ~Rectangle(){cout << "Rectangle Destructor" << endl;}
};


class Triangle:public Set
{
public:
    void draw()
    {
        cout << "Circle Drawn" << endl;
    }

    ~Triangle(){cout << "Triangle Destructor" << endl;}
};

class Square:public Set
{
public:
    void draw()
    {
        cout << "Circle Drawn" << endl;
    }

    ~Square(){cout << "Square Destructor" << endl;}
};

void drawObject(Set *a)
{
    a->draw();
    delete a;
}

int main()
{

    drawObject(new Set);
    drawObject(new Circle);
    drawObject(new Rectangle);
    drawObject(new Triangle);
    drawObject(new Square);

    return 0;
}