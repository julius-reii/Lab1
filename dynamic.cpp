#include <iostream>
#include <string>

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

    Student(Student&);

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

    void setData()
    {
        cout << "Enter Name and Roll no: ";
        cin >> Name >> Roll;
    }

    void getData()
    {
        cout << "Name: " << Name << " Roll: " << Roll << endl;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

Student::Student(Student &x) //copy constructor
{
    this->Name = x.Name;
    this->Roll = x.Roll;
}

int main()
{
    Student s1("ram", 10);
    Student s2;
    s2 = s1; // or Student s2(s1); means the same thing

    s1.getData();
    s2.getData();

    return 0;

}

