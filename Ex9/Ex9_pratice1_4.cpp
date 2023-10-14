#include <iostream>
using namespace std;

int calc(int x, int y);

int main()
{
    int a, b;

    cout << "Enter two number: " << endl;
    cin >> a >> b;

    cout << "Result: " << calc(a, b) << endl;

    return 0;
}

int calc(int x, int y)
{
    char ch;

    cout << "Enter operator:" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return x - y;
        break;
    case '*':
        return x * y;
        break;
    case '/':
        return x / y;
        break;
    default:
        return 0;
    }
}
