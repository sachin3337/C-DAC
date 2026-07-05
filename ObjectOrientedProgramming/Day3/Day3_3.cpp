// deafult argument
#include <iostream>
using namespace std;

// void add(int num1, int num2)
// {
//     cout << "Result: " << num1 + num2 << endl;
// }
// void add(int num1, int num2, int num3)
// {
//     cout << "Result: " << num1 + num2 + num3 << endl;
// }
void add(int num1, int num2, int num3, int num4 = 0)
{
    cout << "Result: " << num1 + num2 + num3 + num4 << endl;
}

int main()
{
    // add(10, 20);
    add(10, 20, 30);
    // add();
    // add(10);
    // add(10, 20, 30);
}