// inline function
#include <iostream>
using namespace std;

// inline void greet()
// {
//     cout << "hello Everyone " << endl;
//     cout << "hello Everyone " << endl;
//      cout << "hello Everyone " << endl;
//       cout << "hello Everyone " << endl;
//       for (int i = 0; i < 3; i++)
//       {
//         greet();
//       }

// }

inline void greet()
{
    cout << "hello Everyone " << endl;
}

int main()
{
    cout << "hello to Main" << endl;
    greet(); // cout << "hello Everyone " << endl;
    greet(); // cout << "hello Everyone " << endl;
    greet(); // cout << "hello Everyone " << endl;
    greet();
}

// g++ -O2 -Winline filename.cpp
// to check inline request is accepted or not
