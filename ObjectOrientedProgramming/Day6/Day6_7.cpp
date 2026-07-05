#include <iostream>
using namespace std;
// Exception handling:-throw catch try
int main()
{
    int numerator, denominator, result;
    cout << "enter the numerator " << endl;
    cin >> numerator;
    cout << "enter the denominator " << endl;
    cin >> denominator;
    try
    {
        if (denominator == 0)
            throw 10.00;
        result = numerator / denominator;
    }

    catch (int ex)
    {
        cout << "cannot divided by " << ex << endl;
    }
    catch (char ex)
    {
        cout << "cannot divided by " << ex << endl;
    }
    catch (...)
    {
        cout << "cannot divided by zero " << endl;
    }

    cout << "Result: " << result << endl;
}