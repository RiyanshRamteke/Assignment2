#include <iostream>
using namespace std;

class Car
{
    string brand;
    int modelYear;
    int price;

public:

    // 1. Default Constructor
    Car()
    {
        brand = "Toyota";
        modelYear = 2022;
        price = 1500000;
    }

    // 2. Parameterized Constructor
    Car(string b, int y, int p)
    {
        brand = b;
        modelYear = y;
        price = p;
    }

    // 3. Copy Constructor
    Car(Car &c)
    {
        brand = c.brand;
        modelYear = c.modelYear;
        price = c.price;
    }

    // Member Function
    void display()
    {
        cout << "Brand     : " << brand << endl;
        cout << "Model Year: " << modelYear << endl;
        cout << "Price     : " << price << endl;
    }
};

int main()
{
    Car c1;

    cout << "Default Constructor:" << endl;
    c1.display();

    Car c2("Honda", 2024, 1800000);

    cout << "\nParameterized Constructor:" << endl;
    c2.display();

    Car c3(c2);

    cout << "\nCopy Constructor:" << endl;
    c3.display();

    return 0;
}