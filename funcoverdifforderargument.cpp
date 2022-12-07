#include <bits/stdc++.h>
using namespace std;
class Overload
{
public:
    void func(int a, float b)
    {
        cout << "Multiply:- " << a * b;
    }
    void func(float b, int a)
    {
        cout << "Add:- " << a + b;
    }
} o1;
int main()
{
    o1.func(2, 2.5);
    cout << endl;
    o1.func(2.5, 2);
    cout << endl;
    return 0;
}
