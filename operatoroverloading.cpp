#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(13){}    
       void operator ++(int)         {     
          num = num+2;    
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    Test tt;    
    tt++;    
    tt.Print();    
    return 0;    
}    