#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Constructor with no arguments
       Area(): length(5), breadth(2) { }

       // Constructor with two arguments
       Area(int l, int b): length(l), breadth(b){ }

       void GetLength()
       {
           cout << "Enter length and breadth respectively: ";
           cin >> length >> breadth;
       }

       int AreaCalculation() {  return length * breadth;  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp << endl;
       }
};

int main()
