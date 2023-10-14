# include<iostream>
using namespace std;
 
void circle(float x);

int main()
{
 
    float r;

    cout << "Enter radius of the circle: " << endl;
    cin >> r;

    circle(r);
 
    return 0;
}

void circle(float x)
{
    cout << "Diameter: " << 2*x << endl;
    cout << "Circumference: " << 2*3.1416*x << endl;
    cout << "Area: " << 3.1416*x*x << endl;
}