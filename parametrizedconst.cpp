#include <iostream>
using namespace std;


class Wall {
  private:
    double length;
    double height;

  public:
    
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  
  Wall wall1(9 , 10);
  Wall wall2(40 ,8);
   
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}