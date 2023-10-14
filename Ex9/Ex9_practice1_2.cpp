# include<iostream>
using namespace std;

int calc();

int main()
{

    cout << "Result: " << calc() << endl;

    return 0;
}

int calc()
{
    int a, b;
    char ch;

    cout << "Enter two number: " << endl;
    cin>>a>>b;
    cout << "Enter operator:" <<endl;
    cin >> ch;

    switch(ch)
    {
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            return a/b;
            break;
        default:
            return 0;

    }

}
