// function overloading
#include <iostream>
using namespace std;

void printValue(int num1, int num2)
{
    cout << "num1(int),num2(int): " << num1 << " " << num2 << endl;
}
// number of parameter
void printValue(int num1, int num2, int num3)
{
    cout << "num1(int),num2(int) ,num3(int): " << num1 << " " << num2 << " " << num3 << endl;
}
// data type
void printValue(int num1, char ch, int num2)
{
    cout << "num1(int),ch(char) num2(int): " << num1 << " " << ch << " " << num2 << endl;
}
// sequence
void printValue(char ch, int num1, int num2)
{
    cout << "num1(int),ch(char) num2(int): " << num1 << " " << ch << " " << num2 << endl;
}

int main()
{
    printValue(10, 20);
    printValue(10, 20, 30);
    printValue(10, 'A', 30);
    printValue('B', 10, 20);
}
//g++ -c filename.cpp -o output.o
//nm output.o  to check mangled name