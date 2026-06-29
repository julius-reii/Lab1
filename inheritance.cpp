#include <iostream>
#include <string>

using namespace std;

class Test
{
private: // cannot be inherited
    int x;
public:
    float a;
protected: // inheritable private access specifier
    string name;
};

class sample:public Test //creating a derived class of class Test
{
public:
    string address;
};