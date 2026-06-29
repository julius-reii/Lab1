//consider two classes one representing first name another representing last name
//now use a bridge (friend) function that dynamically concatenetes the string of two classes

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class First;
class Last;

class First
{
private:
    char* firstName;
    int len;

public:

    First()
    {
        firstName = nullptr;
        len = 0;
    }

    First(const char * a)
    {
        len = strlen(a);
        firstName = new char[len + 1];
        strcpy(firstName, a);
    }

    ~First()
    {
        delete firstName;
    }

    friend char* concatenate(const First& f, const Last& l);
};

class Last
{
private:
    char* lastName;
    int len;

public:

    Last()
    {
        lastName = nullptr;
        len = 0;
    }

    Last(const char * a)
    {
        len = strlen(a);
        lastName = new char[len + 1];
        strcpy(lastName, a);
    }

    ~Last()
    {
        delete lastName;
    }

    friend char* concatenate(const First& f, const Last& l);
};

char* concatenate(const First& f, const Last& l)
{
    int le = f.len + l.len;
    char *c = new char[le + 1];

    strcat(c, f.firstName);
    strcat(c, l.lastName);

    return c;
}

int main()
{
    First a("Rishav");
    Last b("Maharjan");

    char* c = concatenate(a, b);

    cout << c << endl;

    return 0;
}