//create a class name userid that should store username and its uuid
//use dynamic constructor to initialize the object

#include <iostream>
#include <string.h>
using namespace std;


class User
{
private:
    char *name;
    long int id;
    static long int no;

public:
    User()
    {
        name = nullptr;
        no++;
        id = no;
    }

    User(const char *a)
    {
        int l = strlen(a);
        name = new char[l + 1];
        strcpy(name, a);
        no++;
        id = no;
    }

    void show()
    {
        cout << "Id: " << id << "Name: " << name << endl;
    }

    ~User()
    {
        delete name;
    }
};

long int User:: no = 0;

int main()
{
    User x("Ram");
    cout << "Size of x: " << sizeof(x) << endl;
    x.show();
    User y("Krishna");
    cout << "Size of y: " << sizeof(x) << endl;
    y.show();

    return 0;
}
