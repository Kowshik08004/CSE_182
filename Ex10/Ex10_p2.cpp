#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *a, *b, x, y;
    a = &x;
    b = &y;
    cout<<"Enter two number: "<<endl;
    cin >> x >> y;
    cout << "Sum: " << *a + *b << endl;

    return 0;
}
