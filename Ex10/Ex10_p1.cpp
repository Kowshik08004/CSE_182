//Write a C++ Program to change the value of a constant integer using pointers.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *p, a;
    a = 10;
    cout << "Value of a: " << a << endl;
    p = &a;
    *p = 20;
    cout << "Value of a after changing: " << a << endl;

    return 0;
}