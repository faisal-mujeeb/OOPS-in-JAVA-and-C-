#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int perimeter(int, int);
    double perimeter(double, double);
};
int Rectangle ::perimeter(int a, int b)
{
    return 2 * (a + b);
}
double Rectangle ::perimeter(double a, double b)
{
    return 2 * (a + b);
}
int main()
{
    Rectangle r1;
    cout << "Perimeter of rectangle having:- "<<endl;
    cout << r1.perimeter(2, 5) << endl;
    cout << r1.perimeter(2.5, 5.7);
    return 0;
}
