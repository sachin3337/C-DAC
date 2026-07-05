#include <iostream>
using namespace std;
//template
// void swaptheValues(int &num1, int &num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }
// void swaptheValues(char &num1, char &num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

template <typename T>

void swaptheValues(T &num1, T &num2)
{
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    // char a = 'e';
    // char b = 'd';
    cout << "before the swap " << a << " " << b << endl;
    swaptheValues(a, b);
    cout << "after the swap " << a << " " << b << endl;
}