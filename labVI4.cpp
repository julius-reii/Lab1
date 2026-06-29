//multiple inheritance
#include <iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void input()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }

    void display()
    {
        cout << "The value of a : " << a << endl;
    }
};


class B
{
protected:
    int a;
public:
    void input()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }

    void display()
    {
        cout << "The value of a : " << a << endl;
    }
};

class C:public A, public B
{
protected:
    int a;
public:
    void input()
    {
        A::input();
        B::input();

        cout << "Enter value of a: ";
        cin >> a;
    }

    void display()
    {
        A::display();
        B::display();

        cout << "The value of a : " << a << endl;

        cout << "Sum: " << A::a + B::a + a << endl;
    }
};

int main()
{
    C x;
    x.input();
    x.display();

    return 0;
}