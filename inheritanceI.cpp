#include <iostream>
#include <string>

using namespace std;

namespace rishav
{
    void log(string s)
    {
        cout << s << endl;
    }
}

class animal
{
protected:
    string breed;
    int type;

    void show()
    {
        rishav::log(breed);
        rishav::log
    }
    void sound()
    {
        rishav::log("Animal sound");
    }

    animal():breed(""), type(0){}
    animal(string b, int t):breed(b), type(t){}
    ~animal(){cout << "base class destructor" << endl;}
};

class dog:public animal
{
private:
    string name;
public:
    void sound() //member function overriding ==> creating a derived class from base class,
                                             // if a function in derived class has same name as base class function only the function of derived class executes
    {

        animal::sound(); //calls the sound function of base class
        cout << "dog bark" << endl;
    }

    dog():animal()
    {
        name = "";
    }
    dog(string b, int t, string n):animal(b,t)
    {
        name = n;
    }
    ~dog()
    {
        cout << "derived class destructor" << endl;
    }
};

int main()
{
    dog d("german shephard", 1, "jimmy");
    

    return 0;
}

