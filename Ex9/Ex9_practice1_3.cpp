# include<iostream>
using namespace std;
 
void calc(int x, int y);

int main()
{
 
    int a, b;

    cout << "Enter two number: " << endl;
    cin >> a >> b;
 
    calc(a, b);

    return 0;
}

void calc(int x, int y)
{
    char ch;

    cout << "Enter operator:" <<endl;
    cin >> ch;

    switch(ch)
    {
        case '+':
            cout << "Result: " << x+y <<endl;
            break;
        case '-':
            cout << "Result: " << x-y <<endl;
            break;
        case '*':
            cout << "Result: " << x*y <<endl;
            break;
        case '/':
            cout << "Result: " << x/y <<endl;
            break;
        default:
            cout << "Result: 0" <<endl;
            break;
    }
}
