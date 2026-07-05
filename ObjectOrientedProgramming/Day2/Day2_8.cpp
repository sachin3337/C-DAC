// cin cout are the object which comes from
// istream and ostream classes respectfully
// cin => istream
// cout =>ostream
// iostream  header file
#include <iostream>
using namespace std;
int main()
{
    // print hello on console
    printf("hello\n");
    // std::cout << "hello" << std::endl;
    cout << "hello" << endl;
    int num1 = 10;
    // to print number using printf
    printf("%d\n", num1);
    cout << "num1: " << num1 << endl;

    // input
    int num2, num3;
    cout << "enter the number";

    // using scanf;
    // scanf("%d", &num2);
    // printf("%d\n", num2);

    // input cin
    cin >> num2 >> num3;
    cout << "num2: " << num2 << "num3 " << num3;
}
// ios =>istream ostream
//         cin     cout
// iostream std[extern cin extern cout]