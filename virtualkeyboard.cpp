#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void display(){
        cout<<"A class (Base Class)"<<endl;
    }
};
class B:virtual public A {
    public:
    void display(){
        cout<<"B class (Derived from class A)"<<endl;
    }
};
class C:virtual public A {
    public:
    void display(){
        cout<<"C class (Derived from class A)"<<endl;
    }
};
class D:public B, public C{
    public:
    void display(){
        cout<<"D class (Derived from class B and C)"<<endl;
    }
};
int main(){
    D d;
    d.display();
    d.C::display();
    d.B::display();
    d.A::display();
    return 0;
}
