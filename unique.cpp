#include <iostream>
#include <memory>

using namespace std;

class Student
{
private:
    string Name;
    int Roll;
public:
        Student()
    {
        cout << "Default Constructor" << endl;

        this->Name = "null";
        this->Roll = 0;
    }

    Student(string name, int roll)
    {
        cout << "Constuctor with arguement" << endl;
        this->Name = name;
        this->Roll = roll;
    }

    // void setData(string name, int roll)
    // {
    //     Name = name;
    //     Roll = roll;
    // }

    void getData()
    {
        cout << "Name: " << Name << " Roll: " << Roll << endl;
    }

    void setData()
    {
        cout << "Enter Name and Roll no: ";
        cin >> Name >> Roll;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    unique_ptr<Student> a = make_unique<Student>("ram", 1); //new way

    a->getData();

    return 0;
}