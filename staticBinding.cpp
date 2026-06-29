#include <iostream>

using namespace std;

class Animal
{
public:
    Animal(){}
    virtual void show() //virtual function, allows a base class pointer to call a function based on its content
    {
        cout <<"animal sound" << endl;
    }
    virtual ~Animal(){cout << "Base class Destructor" << endl;} //virtual destructor
};


class Dog:public Animal
{
public:
    void show()
    {
        cout << "Dog bark" << endl;
    }

    ~Dog(){cout << "Derived class destructor" << endl;}
};

int main()
{
    Animal *a = new Animal;
    a->show(); // calls base class function
    delete a;
    a = new Dog;
    a->show(); // calls dog class function (runtime polymorphism, because of virtual keyword)
    delete a;
    return 0;
}