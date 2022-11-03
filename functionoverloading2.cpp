#include<bits/stdc++.h>
using namespace std;
class Overload{
    public:
    void display(char a){
        cout<<"Running character "<<a;
    }
    void display(int a){
        cout<<"Running integer "<<a;
    }
    void display(double a){
        cout<<"Running double "<<a;
    }
}o1;
int main(){
    o1.display('a');
    cout<<endl;
    o1.display(22);
    cout<<endl;
    o1.display(2.9);
    return 0;
}