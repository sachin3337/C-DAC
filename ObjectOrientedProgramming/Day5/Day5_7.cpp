#include <iostream>
using namespace std;
// association=>composition
// car has a Engine
class Engine
{

    int cc;
    int fuel;

public:
    Engine(int cc = 0, int fuel = 0)
    {
        this->cc = cc;
        this->fuel = fuel;
    }

    void acceptDetails()
    {
        cout << "enter the cc " << endl;
        cin >> cc;
        cout << "enter the fuel " << endl;
        cin >> fuel;
    }
    void printDetails()
    {
        cout << " cc " << cc << endl
             << " fuel " << fuel << endl;
    }
};
// dependent object
class Car
{
    int price;
    Engine e;

public:
    Car(int price = 0, int cc = 0, int fuel = 0) : e(cc, fuel), price(price)
    {
    }
    void acceptCarDetails()
    {
        cout << "enter the price: " << endl;
        cin >> price;
        cout << "enter the engine details";
        e.acceptDetails();
    }

    void printCarDetails()
    {
        cout << "Price: " << price << endl;
        e.printDetails();
    }
};

int main()
{
    Car c1;
    // c1.acceptCarDetails();
    // c1.printCarDetails();
    cout << "sizeof(car)" << sizeof(c1) << endl;
}
int main2()
{
    Car c1(1000, 20, 30);
    c1.printCarDetails();
    return 0;
}
int main1()
{
    Engine e(10, 20);
    e.printDetails();
    return 0;
}
