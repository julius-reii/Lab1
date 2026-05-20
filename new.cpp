#include <iostream>
#include <string>

using namespace std;

struct student1
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

    string getName()
    {
        return Name;
    }

    int getAge()
    {
        return Age;
    }

    string getAddress()
    {
        return Address;
    }

};

class student2
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

        string getName()
    {
        return Name;
    }

    int getAge()
    {
        return Age;
    }

    string getAddress()
    {
        return Address;
    }
};


int main()
{
    student1 s1;

    s1.putName("rishav");
    s1.putAge(18);
    s1.putAddress("Harisiddhi");

    cout << "Name: " << s1.getName() << " Age: " << s1.getAge() << " Address: " << s1.getAddress() << endl;



    student2 s2;

    s2.putName("Maharjan");
    s2.putAge(18);
    s2.putAddress("Lalitpur");

    cout << "Name: " << s2.getName() << " Age: " << s2.getAge() << " Address: " << s2.getAddress() << endl;
    

    return 0;
}