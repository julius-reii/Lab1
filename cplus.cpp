#include <iostream>
#include <string>

using namespace std;


class student
{
private: 
    string Name;
    int Age;
    string Address;
public:

    void putName(string name)
    {
        Name = name;
    }

    void putAge(int age)
    {
        Age = age;
    }

    void putAddress(string address)
    {
        Address = address;
    }


    void showData();


};

void student::showData() //scope resolution operator; <return type> student class showData()
{
    cout << "====================================" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Address: " << Address << endl;
    cout << "====================================" << endl;
}

    void student::setData(string name, int age, string address)
    {
        this->Name = name; //this gives the memory address of the
        this->Address = age;
        this->Address = address;

        (*this).Name = name;
    }

int main()
{

    student2 s2;

    s2.putName("Maharjan");
    s2.putAge(18);
    s2.putAddress("Lalitpur");

    s2.setData("Rishav", 10, "Lalitpur");

    s2.showData();
    

    return 0;
}