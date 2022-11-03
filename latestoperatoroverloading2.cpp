#include<bits/stdc++.h>
using namespace std;
class Index{
    public:
    int v;
    Index(){
        v = 20;
    }
    void operator --(){
        v-=1;
    }
    void operator --(int){
        v-=1;
    }
};
int main(){
    Index i;
    i--;
    cout<<i.v<<endl;
    --i;
    cout<<i.v<<endl;
    return 0;
}