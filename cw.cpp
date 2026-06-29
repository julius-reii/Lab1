//create two class, one representing american dollar and another representing nepali rupees
//convert nepali rupees into amerian dollar using source class and destination class conversion

#include <iostream>

using namespace std;

class NRS;
class USD;

class USD
{
private:
    float dollar;

public:

USD(float d = 0):dollar(d)
{

}

float getDollar() {return dollar;}

void show() const 
{
    cout << "Dollar: " << dollar << endl;
}

USD (NRS &);

operator NRS();


~USD(){}

};

class NRS
{
private:
    float rupee;

public:

NRS(float n = 0):rupee(n){}

float getRupee(){return rupee;}

void show() const 
{
    cout << "Rupee: " << rupee << endl;
}

//operator USD();

//NRS (USD & a);
~NRS(){}

};

/*NRS::NRS (USD & a) // destination class conversion (dollar to rupee)
{
    rupee = static_cast<float>(a.getDollar() * 150);
}*/

USD:: operator NRS() //source class conversion (dollar to rupee)
{
    return dollar * 150;
}


/*NRS:: operator USD() //source class conversion (rupee to dollar)
{
    return rupee / 150.0;
}*/


USD:: USD(NRS& n) // destination class conversion (rupee to dollar)
{
    dollar = n.getRupee() / 150;
}

int main()
{
    USD a(10.5);
    a.show();
    NRS b = a;
    b.show();

    NRS c(250);
    c.show();
    USD d = c;
    d.show();

    return 0;
}