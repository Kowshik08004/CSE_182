# include<iostream>
using namespace std;
 
void calc();

int main()
{
 
    calc();
 
    return 0;
}

void calc()
{
    int a, b;

    cout << "Enter two number: " << endl;
    cin>>a>>b;

    cout<<"Addition result: "<<a+b<<endl;
    cout<<"Substraction result: "<<a-b<<endl;
    cout<<"Multiplication result: "<<a*b<<endl;
    cout<<"Division result: "<<a/b<<endl;
    
}